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

/*#include <iostream>  //9.4.5 Пространства имен (namespace)

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
}*/

/*#include <iostream>  //9.5.1 Оператор using

using std::cin;
using std::cout;

int main() {
    char arr[50] = {0};
    cin >> arr;
    cout << arr;
    return 0;
}*/

/*#include <cstring>   //9.5.2 Оператор using
#include <iostream>

enum { max_string = 50 };

using MEASURE = struct {
    unsigned short width;
    unsigned short height;
    unsigned short depth;
};

using AUTO = struct {
    char model[max_string];
    unsigned short max_speed;
    double weight;
    MEASURE m;
};

int main() {
    AUTO auto_sell;
    char model[50];
    unsigned short max_speed, width, height, depth;
    double weight;
    std::cin >> model >> max_speed >> weight >> width >> height >> depth;
    strcpy(auto_sell.model, model);
    auto_sell.max_speed = max_speed;
    auto_sell.weight = weight;
    auto_sell.m.depth = depth;
    auto_sell.m.height = height;
    auto_sell.m.width = width;
    return 0;
}*/

/*#include <iostream>  //9.5.3 Оператор using

using FIO_STR = char[50];
using FIO = struct {
    FIO_STR first;
    FIO_STR otch;
    FIO_STR last;
};

int main() {
    FIO fio;
    std::cin >> fio.first >> fio.otch >> fio.last;
    return 0;
}*/

/*#include <cstring>   //9.5.4 Оператор using
#include <iostream>

enum { max_things = 20, max_string = 50 };

using THING = struct {
    char name[max_string];
    double weight;
};

int main() {
    THING th[max_things];
    int count = 0;
    for (int i = 0; i < max_things && std::cin >> th[i].name >> th[i].weight; i++) {
        count++;
    }
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (th[i].weight > th[j].weight) {
                THING temp;
                temp = th[i];
                th[i] = th[j];
                th[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        std::cout << th[i].name << ' ';
    }

    return 0;
}*/

/*#include <iostream>  //9.5.5 Оператор using

enum { max_string = 50 };

using THING = struct {
    char name[max_string];
    unsigned int weight;
};

int main() {
    THING things[] = {{"карандаш", 20},  {"зеркальце", 100}, {"зонт", 500},    {"рубашка", 300},
                      {"брюки", 1000},   {"бумага", 200},    {"молоток", 600}, {"пила", 400},
                      {"удочка", 1200},  {"расческа", 40},   {"котелок", 820}, {"палатка", 5240},
                      {"брезент", 2130}, {"спички", 10}};
    int n = 0;
    size_t size_things = sizeof(things) / sizeof(things[0]);
    for (int i = 0; i < size_things; i++) {
        for (int j = i + 1; j < size_things; j++) {
            if (things[i].weight < things[j].weight) {
                THING temp;
                temp = things[i];
                things[i] = things[j];
                things[j] = temp;
            }
        }
    }
    std::cin >> n;
    n *= 1000;
    int current_weigth = 0;
    for (int i = 0; i < size_things; i++) {
        if (things[i].weight <= n - current_weigth) {
            current_weigth += things[i].weight;
            std::cout << things[i].name << ' ';
        }
        if (current_weigth == n) break;
    }
    return 0;
}*/

/*#include <iostream>  //9.6.1 Новые типы данных. Приведение типов указателей

using std::cin;
using std::cout;
using std::endl;

int main() {
    bool fl_even = false;
    int a;
    while (cin >> a && a != 0) {
        if (a % 2 == 0) {
            continue;
        } else {
            fl_even = true;
            break;
        }
    }
    cout << (fl_even ? "no" : "even") << endl;
    return 0;
}*/

/*#include <iostream>  //9.6.2 Новые типы данных. Приведение типов указателей

using std::cin;
using std::cout;
using std::endl;

int main() {
    bool fl_even = false;
    int a;
    while (cin >> a && a != 0) {
        if (a % 2 == 0) fl_even = true;
    }
    cout << (fl_even ? "even" : "no") << endl;
    return 0;
}*/

/*#include <iostream>  //9.6.3 Новые типы данных. Приведение типов указателей

using std::cin;
using std::cout;
using std::endl;
using PTR_FUNC = bool (*)(int);

bool all(const int* ar, size_t len, PTR_FUNC filter) {
    bool result = false;
    for (int i = 0; i < len; i++) {
        if (filter(ar[i]))
            result = true;
        else
            break;
    }
    return result;
}

bool positive(int x) {
    bool flag = 0;
    if (x > 0) flag = 1;
    return flag;
}

int main() {
    int number[] = {2, 3, 1, -10, 15};
    bool res = all(number, sizeof(number) / sizeof(number[0]), positive);
    return 0;
}*/

/*#include <iostream>  //9.6.4 Новые типы данных. Приведение типов указателей

using std::cin;
using std::cout;
using std::endl;
using PTR_FUNC = bool (*)(double);

bool any(const double* ar, size_t len, PTR_FUNC filter) {
    bool result = false;
    for (int i = 0; i < len; i++) {
        if (filter(ar[i])) {
            result = true;
            break;
        }
    }
    return result;
}

bool range_out(double x) {
    bool flag = false;
    if (x < -0.5 || x > 0.5) flag = true;
    return flag;
}

int main() {
    double number[] = {0.1, 0.2, 0.3, -0.4, 1.4};
    bool res = any(number, sizeof(number) / sizeof(number[0]), range_out);
    return 0;
}*/

/*#include <iostream>  //9.6.5 Новые типы данных. Приведение типов указателей

using std::cin;
using std::cout;
using std::endl;

enum { matrix_size = 4 };

int main() {
    short matrix[matrix_size][matrix_size] = {0};
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (cin >> matrix[i][j]) {
                continue;
            }
        }
    }

    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            if (j == matrix_size - 1)
                cout << matrix[i][j];
            else
                cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}*/

/*#include <cmath>  //9.7.1 Инициализация переменных. Ключевые слова auto и decltype
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum { corners = 4 };

struct point {
    int x, y;
};

double calculating_length(int x_1, int y_1, int x_2, int y_2) {
    double res = std::sqrt(std::pow(x_2 - x_1, 2) + std::pow(y_2 - y_1, 2));
    return res;
}

double calculating_corner(double side_a, double side_b, double side_c) {
    double find =
        ((std::pow(side_a, 2) + std::pow(side_b, 2)) - std::pow(side_c, 2)) / (2 * (side_a * side_b));
    double res = std::acos(find);
    return res;  //* 180 / M_PI;
}

double calculating_area_triangle(double side_a, double side_b, double side_c) {
    double p = (side_a + side_b + side_c) / 2;
    double area = std::sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
    return area;
}

int main() {
    point figure[corners];
    point pt;

    int count = 0;
    while (count < corners && scanf("%d; %d", &figure[count].x, &figure[count].y) == 2) count++;

    if (count != corners) {
        puts("Неверное количество или формат входных данных.");
        return 1;
    }

    if (scanf("%d; %d", &pt.x, &pt.y) != 2) {
        puts("Неверное количество или формат входных данных.");
        return 2;
    }

    double side_1 = calculating_length(figure[0].x, figure[0].y, figure[1].x, figure[1].y);
    double side_2 = calculating_length(figure[1].x, figure[1].y, figure[2].x, figure[2].y);
    double side_3 = calculating_length(figure[2].x, figure[2].y, figure[3].x, figure[3].y);
    double side_4 = calculating_length(figure[3].x, figure[3].y, figure[0].x, figure[0].y);
    double side_ac = calculating_length(figure[0].x, figure[0].y, figure[2].x, figure[2].y);

    double side_corner_ab_bc = calculating_corner(side_1, side_2, side_ac);
    double side_corner_ad_dc = calculating_corner(side_4, side_3, side_ac);

    double target_area =
        0.5 * (side_1 * side_2) * sin(side_corner_ab_bc) + 0.5 * (side_4 * side_3) * sin(side_corner_ad_dc);

    double triangle_side_1 = calculating_length(figure[0].x, figure[0].y, pt.x, pt.y);
    double triangle_side_2 = calculating_length(figure[1].x, figure[1].y, pt.x, pt.y);
    double triangle_side_3 = calculating_length(figure[2].x, figure[2].y, pt.x, pt.y);
    double triangle_side_4 = calculating_length(figure[3].x, figure[3].y, pt.x, pt.y);

    double area_1 = calculating_area_triangle(triangle_side_1, triangle_side_2, side_1);
    double area_2 = calculating_area_triangle(triangle_side_2, triangle_side_3, side_2);
    double area_3 = calculating_area_triangle(triangle_side_3, triangle_side_4, side_3);
    double area_4 = calculating_area_triangle(triangle_side_4, triangle_side_1, side_4);

    double curreant_area = area_1 + area_2 + area_3 + area_4;

    if (abs(target_area - curreant_area) < 1e-10)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}*/

#include <iostream>  //9.8.1 Ссылки. Константные ссылки

using std::cin;
using std::cout;
using std::endl;

enum { total_marks = 23 };

int main() {
    short marks[total_marks] = {0};
    int count = 0;

    for (int i = 0; i < total_marks && cin >> marks[i]; i++) {
        count++;
    }

    for (short& x : marks)
        if (x < 3) x = 0;

    for (short x : marks) cout << x << ' ';
    cout << endl;
    return 0;
}