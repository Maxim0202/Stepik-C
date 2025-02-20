/*#include <iostream>  //9.2.1 Первая программа на С++

int main() {
    std::cout << "I love C++" << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.3.1 Ввод-вывод с помощью объектов cin и cout

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << "; " << b << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.3.2 Ввод-вывод с помощью объектов cin и cout

int main() {
    int a, b;
    std::cin >> a >> b;
    while (a <= b) {
        if (a % 3 == 0) std::cout << a << ' ';
        a++;
    }
    return 0;
}*/

/*#include <iostream>  //9.3.3 Ввод-вывод с помощью объектов cin и cout

enum { max_size_ar = 20 };

int main() {
    int data[max_size_ar];
    for (int i = 0; i < max_size_ar && std::cin >> data[i]; i++) {
        std::cout << data[i] << ' ';
    }
    return 0;
}*/

/*#include <iostream>  //9.3.4 Ввод-вывод с помощью объектов cin и cout

enum { max_size_ar = 20 };

int main() {
    short data[max_size_ar];

    for (int i = 0; i < max_size_ar && !std::cin.eof(); i++) {
        std::cin >> data[i];
        std::cin.ignore();
        std::cout << data[i] << " ";
    }

    return 0;
}*/

/*#include <iostream>  //9.3.5 Ввод-вывод с помощью объектов cin и cout

enum { max_size_name = 50 };

typedef struct {
    unsigned int id;
    char name[max_size_name];
    double weight;
    unsigned int price;
} THING;

int main() {
    THING box;
    std::cin >> box.id >> box.name >> box.weight >> box.price;
    std::cout << box.name << ' ' << box.id << ": " << box.weight << ", " << box.price;
    return 0;
}*/

/*#include <cmath>  //9.3.5 Ввод-вывод с помощью объектов cin и cout
#include <iomanip>
#include <iostream>

double triangle_sq(int a, int b, int c);

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << triangle_sq(a, b, c);
    return 0;
}
double triangle_sq(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}*/

/*#include <iostream>  //9.4.1 Пространства имен (namespace)

namespace triangle {
int perimetr(int a, int b, int c) { return a + b + c; }
}  // namespace triangle

namespace rectangle {
int perimetr(int width, int height) { return 2 * (width + height); }
}  // namespace rectangle

int main() {
    int a0, a1, a2;
    std::cin >> a0 >> a1 >> a2;
    std::cout << triangle::perimetr(a0, a1, a2) << ' ' << rectangle::perimetr(a0, a1) << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.4.2 Пространства имен (namespace)

namespace math {
int ar_compare(const short* a1, size_t len_a1, const short* a2, size_t len_a2) {
    int flag = 0;
    if (len_a1 == len_a2) {
        for (int i = 0; i < len_a1; i++) {
            if (a1[i] == a2[i]) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
}  // namespace math

int main() {
    short ar1[] = {1, 2, 3, 4, 5};
    short ar2[] = {1, 2, 5, 3, 4};
    int res = math::ar_compare(ar1, sizeof(ar1), ar2, sizeof(ar2));
    return 0;
}*/

/*#include <iostream>  //9.4.3 Пространства имен (namespace)
#define MAX 20

namespace array_alg {
typedef enum { sort_asc, sort_desc } TYPE_SORT;
void sorted_int(int* ar, size_t len_ar, TYPE_SORT type) {
    switch (type) {
        case sort_asc:
            for (size_t i = 0; i < len_ar; i++) {
                for (size_t j = i + 1; j < len_ar; j++) {
                    if (ar[i] > ar[j]) {
                        int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                    }
                }
            }
            break;
        case sort_desc:
            for (size_t i = 0; i < len_ar; i++) {
                for (size_t j = i + 1; j < len_ar; j++) {
                    if (ar[i] < ar[j]) {
                        int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                    }
                }
            }
            break;
        default:
            break;
    }
}
}  // namespace array_alg

int main() {
    int ar[MAX];
    size_t count = 0;
    for (int i = 0; i < MAX && std::cin >> ar[i]; i++) {
        count++;
    }
    array_alg::sorted_int(ar, count, array_alg::sort_desc);
    for (int i = 0; i < count; i++) {
        std::cout << ar[i] << ' ';
    }
    return 0;
}*/

/*#include <iostream>  //9.4.4 Пространства имен (namespace)

namespace array_alg {
typedef int (*PTR_FILTER_FUNC)(int a);

size_t filter_int(int* ar, size_t len_ar, PTR_FILTER_FUNC func) {
    size_t res = len_ar;
    for (int i = 0; i < res; ++i) {
        if (!func(ar[i])) {
            for (int j = i; j < res - 1; ++j) {
                ar[j] = ar[j + 1];
            }
            res--;
            i--;
        }
    }
    return res;
}
namespace filter_func {
int even(int a) {
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}

}  // namespace filter_func
}  // namespace array_alg

int main() {
    int arr[20] = {0};
    size_t length = 0;
    for (int i = 0; i < 20 && std::cin >> arr[i]; i++) {
        length++;
    }
    array_alg::PTR_FILTER_FUNC func = array_alg::filter_func::even;
    length = array_alg::filter_int(arr, length, func);

    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}*/

#include <iostream>  ////9.4.5 Пространства имен (namespace)

namespace array_alg {
typedef int (*PTR_FILTER_FUNC)(int a);
size_t add_int(int* src, size_t start, size_t max_len_src, const int* dest, size_t len_dest,
               PTR_FILTER_FUNC func) {
    size_t res = start;
    for (int i = 0; i < len_dest; i++) {
        if (func(dest[i]) && res < max_len_src) {
            src[res] = dest[i];
            res++;
        }
    }
    return res;
}
namespace filter_func {
int mark_positive(int a) {
    if (a >= 4)
        return 1;
    else
        return 0;
}
}  // namespace filter_func
}  // namespace array_alg

int main() {
    int marks[100] = {3, 2, 5, 4, 3};
    int ar[20];
    size_t count = 0, count_marks = 5;
    for (int i = 0; i < 20 && std::cin >> ar[i]; i++) {
        count++;
    }
    array_alg::PTR_FILTER_FUNC func = array_alg::filter_func::mark_positive;
    size_t new_count = array_alg::add_int(marks, count_marks, 100, ar, count, func);
    for (int i = 0; i < new_count; i++) {
        std::cout << marks[i] << ' ';
    }

    return 0;
}