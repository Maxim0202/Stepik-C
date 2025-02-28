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

/*#include <iostream>  //9.8.1 Ссылки. Константные ссылки

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
}*/

/*#include <cmath>  //9.8.2 Ссылки. Константные ссылки
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using POINT = struct {
    double x;
    double y;
};

double get_length(POINT a, POINT b) { return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); }

int main() {
    POINT a = {-2.5, 7.8};
    POINT b = {11.4, 43.2};
    cout << std::setprecision(2) << std::fixed << get_length(a, b) << endl;
    return 0;
}*/

/*#include <cmath>  //9.8.3 Ссылки. Константные ссылки
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

#include <iostream>

struct point {
    int x, y;
};

double sq_tr(const point& a, const point& b, const point& c) {
    double length_1 = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    double length_2 = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
    double length_3 = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
    double p = (length_1 + length_2 + length_3) / 2;
    return sqrt(p * (p - length_1) * (p - length_2) * (p - length_3));
}

int main() {
    point a;
    point b;
    point c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    cout << setprecision(2) << fixed << sq_tr(a, b, c) << endl;
    return 0;
}*/

/*#include <cmath>  //9.8.4 Ссылки. Константные ссылки
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum { corners = 4 };

struct point {
    int x, y;
};

double calculating_length(int x_1, int y_1, int x_2, int y_2);
double calculating_corner(double side_a, double side_b, double side_c);
void calculating_triangle_side(point fogure[], point check, double& side_1, double& side_2, double& side_3,
                               double& side_4);
double calculating_area_triangle(double side_a, double side_b, double side_c);
void find_pt_max(point figure[], int count, point& pt_m);
void find_pt_min(point figure[], int count, point& pt_mi);
double find_current_area(double side_1, double side_2, double side_3, double side_4, double side_1_original,
                         double side_2_original, double side_3_original, double side_4_original);

int main() {
    point figure[corners];
    point pt_max;
    point pt_min;
    point pt;
    double triangle_side_1 = 0.0;
    double triangle_side_2 = 0.0;
    double triangle_side_3 = 0.0;
    double triangle_side_4 = 0.0;

    int count = 0;
    int count_point = 0;
    while (count < corners && scanf("%d; %d", &figure[count].x, &figure[count].y) == 2) count++;

    if (count != corners) {
        puts("Неверное количество или формат входных данных.");
        return 1;
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
    find_pt_max(figure, count, pt_max);
    find_pt_min(figure, count, pt_min);

    for (int i = pt_min.x; i <= pt_max.x; i++) {
        for (int j = pt_min.y; j <= pt_max.y; j++) {
            pt.x = i;
            pt.y = j;
            calculating_triangle_side(figure, pt, triangle_side_1, triangle_side_2, triangle_side_3,
                                      triangle_side_4);
            double current_area = find_current_area(triangle_side_1, triangle_side_2, triangle_side_3,
                                                    triangle_side_4, side_1, side_2, side_3, side_4);

            if (fabs(target_area - current_area) < 1e-10) {
                count_point++;
            }
        }
    }
    cout << count_point << endl;
    return 0;
}

double calculating_length(int x_1, int y_1, int x_2, int y_2) {
    double res = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    return res;
}

double calculating_corner(double side_a, double side_b, double side_c) {
    double find =
        ((pow(side_a, 2) + pow(side_b, 2)) - pow(side_c, 2)) / (2 * (side_a * side_b));
    double res = acos(find);
    return res;
}

void calculating_triangle_side(point figure[], point check, double& side_1, double& side_2, double& side_3,
                               double& side_4) {
    side_1 = calculating_length(figure[0].x, figure[0].y, check.x, check.y);
    side_2 = calculating_length(figure[1].x, figure[1].y, check.x, check.y);
    side_3 = calculating_length(figure[2].x, figure[2].y, check.x, check.y);
    side_4 = calculating_length(figure[3].x, figure[3].y, check.x, check.y);
}

double calculating_area_triangle(double side_a, double side_b, double side_c) {
    double p = (side_a + side_b + side_c) / 2;
    double area = sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
    return area;
}

void find_pt_max(point figure[], int count, point& pt_m) {
    pt_m.x = figure[0].x;
    pt_m.y = figure[0].y;
    for (int i = 1; i < count; i++) {
        if (pt_m.x < figure[i].x) pt_m.x = figure[i].x;
        if (pt_m.y < figure[i].y) pt_m.y = figure[i].y;
    }
}

void find_pt_min(point figure[], int count, point& pt_mi) {
    pt_mi.x = figure[0].x;
    pt_mi.y = figure[0].y;
    for (int i = 1; i < count; i++) {
        if (pt_mi.x > figure[i].x) pt_mi.x = figure[i].x;
        if (pt_mi.y > figure[i].y) pt_mi.y = figure[i].y;
    }
}

double find_current_area(double side_1, double side_2, double side_3, double side_4, double side_1_original,
                         double side_2_original, double side_3_original, double side_4_original) {
    double area_1 = calculating_area_triangle(side_1, side_2, side_1_original);
    double area_2 = calculating_area_triangle(side_2, side_3, side_2_original);
    double area_3 = calculating_area_triangle(side_3, side_4, side_3_original);
    double area_4 = calculating_area_triangle(side_4, side_1, side_4_original);

    double curreant_area = area_1 + area_2 + area_3 + area_4;
    return curreant_area;
}*/

/*#include <iostream>  //9.9.1 Объект-строка string. Операции с объектами класса string
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string fname;
    string lname;
    string fio;
    cin >> fname;
    cin >> lname;
    fio = fname + ", " + lname;
    cout << fio << endl;
    return 0;
}*/

/*#include <iostream>  //9.9.2 Объект-строка string. Операции с объектами класса string
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;  // для конвертации чисел в строки

int main() {
    int width, height;
    cin >> width >> height;
    string data_str;
    data_str = "Переменная width = " + to_string(width) + ", переменная height = " + to_string(height);
    cout << data_str << endl;
    return 0;
}*/

/*#include <iostream>  //9.9.3 Объект-строка string. Операции с объектами класса string
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string msg;
    getline(cin, msg);
    for (int i = 0; i < 4; i++) {
        cout << msg[i];
    }
    cout << endl;
    return 0;
}*/

/*#include <iostream>  //9.9.4 Объект-строка string. Операции с объектами класса string
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string msg;
    getline(cin, msg);
    int count = msg.size();
    for (int i = 0; i < 3; i++) {
        putchar(msg[count - 1]);
        count--;
    }
    return 0;
}*/

/*#include <iostream>  //9.9.5 Объект-строка string. Операции с объектами класса string
#include <string>

enum { max_cities = 10, max_length = 50 };

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    char cities[max_cities][max_length] = {};
    string res;
    int i = 0;
    while (i < max_cities) {
        cin >> cities[i++];
    }
    res = {};
    for (int j = 0; j < i; j++) {
        string test = cities[j];
        if (test.size() > 5) {
            res += test;
            res.append(" ");
        }
    }
    cout << res << endl;
    return 0;
}*/

/*#include <iostream>  //9.9.6 Объект-строка string. Операции с объектами класса string
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size() - 1;) {
        if (str[i] == '-' && str[i + 1] == '-') {
            str.erase(i + 1, 1);
        } else {
            i++;
        }
    }
    cout << str << endl;
    return 0;
}*/

/*#include <cmath>  //9.13.2 Перегрузка функций. Директива extern C
#include <iomanip>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

double get_square(int a, int b, int c);
int get_square(int a, int b);

int main() {
    int x, y, z, a, b;
    cin >> x >> y >> z >> a >> b;
    cout << fixed << setprecision(1);
    cout << get_square(x, y, z) << ' ' << (double)get_square(a, b) << endl;

    return 0;
}

double get_square(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int get_square(int a, int b) { return a * b; }*/

/*#include <iomanip>  //9.13.3 Перегрузка функций. Директива extern C
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

double min2(double a, double b);
int min2(int a, int b);

int main() {
    int a;
    double b;
    cin >> a >> b;
    cout << fixed << setprecision(1);
    cout << min2((double)a, b) << endl;
    return 0;
}

double min2(double a, double b) { return a < b ? a : b; }
int min2(int a, int b) { return a < b ? a : b; }*/

/*#ifdef __cplusplus  //9.13.4 Перегрузка функций. Директива extern C
#include <iomanip>
#include <iostream>
#else
#include <stdio.h>
#endif

#ifdef __cplusplus
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
#endif

#ifdef __cplusplus
extern "C" {
#endif
double mean_2(int a, int b) { return (a + b) / 2.; }
#ifdef __cplusplus
}
#endif

int main() {
    int a, b;
#ifdef __cplusplus
    cin >> a >> b;
#else
    scanf("%d%d", &a, &b);
#endif
    double res = mean_2(a, b);
#ifdef __cplusplus
    cout << fixed << setprecision(1) << res << endl;
#else
    printf("%.1lf", res);
#endif
    return 0;
}*/

/*#include <iostream>  //9.14.1 Значения параметров функции по умолчанию

using std::cin;
using std::cout;
using std::endl;
using calc_type = enum { calc_perimetr, calc_square };

int get_rect_value(int a, int b, calc_type type = calc_perimetr);

int main() {
    int a, b;
    cin >> a >> b;
    cout << get_rect_value(a, b) << endl;
    return 0;
}

int get_rect_value(int a, int b, calc_type type) {
    int res = 0.;
    switch (type) {
        case calc_perimetr:
            res = (a + b) * 2;
            break;
        case calc_square:
            res = a * b;
            break;
        default:
            break;
    }
    return res;
}*/

/*#include <algorithm>  //9.14.2 Значения параметров функции по умолчанию
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_password(string pass, const char* chars = "$%!?@#");
int main() {
    string pass;
    getline(cin, pass);
    cout << (check_password(pass) ? "yes" : "no") << endl;
    return 0;
}

bool check_password(string pass, const char* chars) {
    if (pass.length() >= 8 && pass.find_first_of(chars) != std::string::npos)
        return true;
    else
        return false;
}*/

/*#include <algorithm>  //9.14.3 Значения параметров функции по умолчанию
#include <cstring>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

enum { max_length = 100 };

void set_tag(char* str, int length, const char* tag = "h1");

int main() {
    string title, tag;
    getline(cin, title);
    getline(cin, tag);
    char str[max_length] = {};
    char str_2[max_length] = {};
    char str_tag[max_length] = {};
    strncpy(str, title.c_str(), max_length - 1);
    strncpy(str_2, title.c_str(), max_length - 1);
    strncpy(str_tag, tag.c_str(), max_length - 1);
    set_tag(str, max_length);
    set_tag(str_2, max_length, str_tag);
    cout << str << endl;
    cout << str_2 << endl;
    return 0;
}

void set_tag(char* str, int length, const char* tag) {
    char buff[length] = {};
    sprintf(buff, "<%s>%s</%s>", tag, str, tag);
    strncpy(str, buff, length);
}*/

/*#include <algorithm>  //9.14.4 Значения параметров функции по умолчанию
#include <cstring>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using calc_type = enum { calc_perimetr, calc_square };

int get_rect(int a, int b, calc_type type = calc_perimetr);
double get_rect(double a, double b, calc_type type = calc_perimetr);

int main() { return 0; }

int get_rect(int a, int b, calc_type type) {
    int res = 0;
    switch (type) {
        case calc_perimetr:
            res = (a + b) * 2;
            break;
        case calc_square:
            res = a * b;
            break;
        default:
            break;
    }
    return res;
}
double get_rect(double a, double b, calc_type type) {
    double res = 0.;
    switch (type) {
        case calc_perimetr:
            res = (a + b) * 2;
            break;
        case calc_square:
            res = a * b;
            break;
        default:
            break;
    }
    return res;
}*/

/*#include <algorithm>  //9.14.5 Значения параметров функции по умолчанию
#include <cstring>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using type_sort = enum { sort_asc, sort_desc };

int sort(short* ar, size_t len, type_sort type = sort_asc) {
    int count = 0;
    short arr_check[len] = {};
    memcpy(arr_check, ar, sizeof(ar));
    switch (type) {
        case sort_asc:
            for (int i = 0; i < len; i++) {
                for (int j = i; j < len; j++)
                    if (ar[i] > ar[j]) {
                        int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                    }
            }
            break;
        case sort_desc:
            for (int i = 0; i < len; i++) {
                for (int j = i; j < len; j++)
                    if (ar[i] < ar[j]) {
                        int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                    }
            }
            break;
        default:
            break;
    }
    for (int i = 0; i < len; i++) {
        if (ar[i] != arr_check[i]) count++;
    }
    return count;
}

int main() {
    short arr[] = {3, 2, 4, 5};
    size_t length = sizeof(arr) / sizeof(*arr);
    int res = sort(arr, length);
    cout << res << endl;
    return 0;
}*/

/*#include <iostream>  //9.15.1 inline-функции

using std::cin;
using std::cout;
using std::endl;

inline int get_max_3(int a, int b, int c) {
    int res;
    if (a > b && a > c) res = a;
    if (b > a && b > c) res = b;
    if (c > b && c > a) res = c;
    return res;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int res = get_max_3(a, b, c);
    cout << res << endl;
    return 0;
}*/

/*#include <iostream>  //9.15.2 inline-функции

using std::cin;
using std::cout;
using std::endl;

inline int sum_ar_int(int* ar, size_t len) {
    int res = 0;
    for (int i = 0; i < len; i++) {
        res += ar[i];
    }
    return res;
}

int main() {
    int ar[10] = {};
    int i = 0;
    while (cin >> ar[i++]) {
    };
    size_t len = std::size(ar);
    cout << sum_ar_int(ar, len) << endl;
    return 0;
}*/

/*#include <iostream>  //9.15.3 inline-функции

using std::cin;
using std::cout;
using std::endl;

inline void range(int* ar, size_t len, int start, int stop, int step) {
    for (int i = 0; i < len; i++) {
        ar[i] = start;
        start += step;
        if (start >= stop) break;
    }
}

int main() {
    int at[10] = {};
    int start, stop, step;
    cin >> start >> step >> stop;
    range(at, 10, start, stop, step);
    return 0;
}*/

/*#include <iostream>  //9.15.4 inline-функции

enum { max_size = 20 };

using ptr_func = bool (*)(int);

bool check(int a);
int sum_ar(const int *ar, size_t len_ar, ptr_func func);

int main() {
    int marks[max_size] = {0};
    int x;
    int i = 0;
    while (std::cin >> x) {
        if (i < max_size)
            marks[i++] = x;
        else
            break;
    }
    ptr_func func = &check;
    std::cout << sum_ar(marks, std::size(marks), func) << std::endl;
    return 0;
}

bool check(int a) {
    if (a % 2 == 0)
        return true;
    else
        return false;
}
int sum_ar(const int *ar, size_t len_ar, ptr_func func) {
    int res = 0;
    for (int i = 0; i < len_ar; i++) {
        if (func(ar[i])) res += ar[i];
    }
    return res;
}*/

/*#include <iostream>  //9.15.5 inline-функции

enum { max_size = 20 };

void reverse(short *arr, int len);

int main() {
    short digs[max_size];
    int count = 0;
    while (count < max_size && std::cin >> digs[count]) count++;

    reverse(digs, count);
    for (int i = 0; i < count; i++) std::cout << digs[i] << ' ';
    return 0;
}

void reverse(short *arr, int len) {
    int end = len - 1;
    for (int start = 0; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}*/

/*#include <cmath>  //9.16.1 Лямбда-выражения. Объявление и вызов
#include <iostream>
#include <iomanip>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    auto sq_tr = [](int a, int b, int c) {
        double p = (a + b + c) / 2.;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    };
    std::cout << std::fixed << std::setprecision(2) << sq_tr(a, b, c) << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.16.2 Лямбда-выражения. Объявление и вызов

int main() {
    int num = 0;
    using lyambda_type = int (*)(int a);
    lyambda_type func_filter[3] = {};
    func_filter[0] = [](int x) -> int { return x % 2 == 0; };
    func_filter[1] = [](int x) -> int { return x < 0; };
    func_filter[2] = [](int x) -> int { return x > 0; };

    std::cin >> num;
    std::cout << func_filter[1](num) << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.16.3 Лямбда-выражения. Объявление и вызов

enum { max_length_ar = 20 };
using filter_func = bool (*)(short);

void remove_elem(short* ar, int& len, filter_func filter) {
    for (int i = 0; i < len;) {
        if (filter(ar[i])) {
            for (int j = i; j < len - 1; j++) {
                ar[j] = ar[j + 1];
            }
            len--;
        } else {
            i++;
        }
    }
}

int main() {
    short marks[max_length_ar] = {0};
    int count = 0;
    while (count < max_length_ar && std::cin >> marks[count]) count++;
    remove_elem(marks, count, [](short a) -> bool { return a < 3; });
    for (int i = 0; i < count; i++) {
        std::cout << marks[i] << ' ';
    }
    return 0;
}*/

/*#include <iostream>  //9.16.4 Лямбда-выражения. Объявление и вызов

enum { max_length_ar = 20 };
using filter_func = bool (*)(int);

int sum_elem(const int* ar, size_t len, filter_func filter) {
    int res = 0;
    for (int i = 0; i < len; i++) {
        if (filter(ar[i])) {
            res += ar[i];
        }
    }
    return res;
}

int main(void) {
    int marks[max_length_ar] = {0};
    int count = 0;
    while (count < max_length_ar && std::cin >> marks[count]) count++;

    filter_func finc = [](int a) -> bool { return a % 2 == 0 && a % 3 == 0; };
    std::cout << sum_elem(marks, count, finc) << std::endl;

    return 0;
}*/

/*#include <iostream>  //9.16.5 Лямбда-выражения. Объявление и вызов

enum { max_length_ar = 20 };
using filter_func = bool (*)(int, int);

int sum_elem(const int* ar, size_t len, filter_func filter) {
    int res = 0;
    for (int i = 0; i < len - 1; i++) {
        if (filter(ar[i], ar[i + 1])) {
            res += ar[i + 1];
        }
    }
    return res;
}

int main() {
    int marks[max_length_ar] = {0};
    int count = 0;
    while (count < max_length_ar && std::cin >> marks[count]) count++;
    std::cout << sum_elem(marks, count, [](int a, int b) -> bool { return a % 2 == 0 && b % 3 == 0; }) <<
std::endl; return 0;
}*/

/*#include <iostream>  //9.17.1 Захват внешних значений в лямбда выражениях

int main() {
    int w, h;
    std::cin >> w >> h;
    auto sum_ab = [=]() { return w + h; };
    std::cout << sum_ab() << std::endl;
    return 0;
}*/

/*#include <iostream>  //9.17.2 Захват внешних значений в лямбда выражениях
#include <string>

int main() {
    char str[100];
    size_t len = sizeof(str);
    auto gl = [=, &str]() {
        std::string line;
        getline(std::cin, line);

        int i = 0;
        for (; i < line.length() && i < len - 1; ++i) str[i] = line[i];
        str[i] = '\0';
    };
    gl();
    std::cout << str;
    return 0;
}*/

/*#include <iostream>  //9.17.3 Захват внешних значений в лямбда выражениях

enum { size_pole = 10 };

int main(void) {
    char pg[size_pole][size_pole] = {0};

    auto is_v = [&](int x, int y) {
        for (int i = -1; i <= 1; ++i)
            for (int j = -1; j <= 1; ++j) {
                int xx = x + i, yy = y + j;
                if (xx < 0 || xx >= size_pole || yy < 0 || yy >= size_pole) continue;
                if (pg[xx][yy] == '*') return 0;
            }
        return 1;
    };

    int mines = 0;
    do {
        int i = rand() % size_pole;
        int j = rand() % size_pole;
        if (is_v(i, j)) {
            pg[i][j] = '*';
            mines++;
        }
    } while (mines < 12);

    for (int i = 0; i < size_pole; ++i) {
        for (int j = 0; j < size_pole; ++j) printf("%c ", (pg[i][j] == 0) ? '#' : '*');
        putchar('\n');
    }

    return 0;
}*/

/*#include <iostream>  //10.1.1 Структуры в С++, как обновленный тип данных

struct volume {
    int width;
    int height;
    int depth;
    int get_volume() { return width * height * depth;};
};

int main() {
    volume data;
    std::cin >> data.width >> data.height >> data.depth;
    std::cout << data.get_volume() << std::endl;
    return 0;
}*/

/*#include <iomanip> //10.1.2 Структуры в С++, как обновленный тип данных
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

struct book {
    string title;
    string author;
    int price;
    int npages;
    double price_per_page() { return (double)price / npages; };
};

int main() {
    book lib[10];
    int count = 0;
    for (int i = 0; i < 10 && cin; i++) {
        getline(cin, lib[i].title);
        getline(cin, lib[i].author);
        cin >> lib[i].price >> lib[i].npages;
        cin.ignore();
        count++;
    }
    for (int i = 0; i < count - 1; i++) {
        cout << fixed << setprecision(2) << lib[i].price_per_page() << ' ';
    }
    return 0;
}*/

/*#include <cmath>  //10.1.3 Структуры в С++, как обновленный тип данных
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

struct vector4D {
    double x;
    double y;
    double z;
    double t;
    void read_data(FILE* stream, char sep = ' ') { cin >> x >> sep >> y >> sep >> z >> sep >> t; };
    double length() { return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(t, 2)); };
};

int main() {
    vector4D v1;
    vector4D v2;
    v1.read_data(stdin, ';');
    v2.read_data(stdin, ';');
    cout << fixed << setprecision(3);
    cout << v1.length() << ' ' << v2.length() << endl;
    return 0;
}*/

/*#include <iostream>  //10.1.4 Структуры в С++, как обновленный тип данных

struct tag_price {
    char name[100];
    unsigned int rubs;
    unsigned char kops;
    unsigned int foreign_key;
};

int main() {
    tag_price pr = price_100;
    std::cout << pr.name << ' ' << (int)pr.rubs << ' ' << (int)pr.kops << ' ' << (int)pr. foreign_key << std::endl;
    return 0;
}*/

/*#include <iostream>  //10.1.5 Структуры в С++, как обновленный тип данных
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
    char* get_time(char* str, size_t max_length) {
        snprintf(str, max_length, "%02hhu:%02hhu:%02hhu", hours, minutes, seconds);
        return str;
    }
    static tag_time sum_time(const tag_time& t1, const tag_time& t2) {
        tag_time tm_res;
        int all_seconds =
            t1.seconds + t2.seconds + (t1.minutes + t2.minutes) * 60 + (t1.hours + t2.hours) * 3600;
        tm_res.hours = all_seconds / 3600;
        tm_res.minutes = (all_seconds % 3600) / 60;
        tm_res.seconds = (all_seconds % 3600) % 60;
        return tm_res;
    }
};

int main() {
    tag_time tm1, tm2, time_res;
    int hour1, minute1, second1, hour2, minute2, second2;
    char result[10]{};
    cin >> hour1 >> minute1 >> second1 >> hour2 >> minute2 >> second2;
    tm1.hours = hour1;
    tm1.minutes = minute1;
    tm1.seconds = second1;
    tm2.hours = hour2;
    tm2.minutes = minute2;
    tm2.seconds = second2;
    time_res = time_res.sum_time(tm1, tm2);
    cout << time_res.get_time(result, 10) << endl;
    return 0;
}*/

#include <iostream>  //10.1.6 Структуры в С++, как обновленный тип данных

using std::cin;
using std::cout;
using std::endl;

enum { total_points = 100 };

struct tag_point_3d {
    int x, y, z;
};

int main() {
    tag_point_3d points[total_points];
    int x, y, z = 0;
    int total = 0;
    for (int i = 0; i < total_points && cin >> x >> y >> z; i++) {
        points[i].x = x;
        points[i].y = y;
        points[i].z = z;
        total++;
    }
    cout << points[0].x << ' ' << points[0].y << ' ' << points[0].z << endl;
    return 0;
}