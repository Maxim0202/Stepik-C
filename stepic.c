/*#include <stdio.h> //3.3.6 Условное тернарное выражение

int main() {
    int a, b, c, flag;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("n/a");
        return -1;
    }
    flag = a < b + c && b < a + c && c < b + a ? 1 : 0;
    printf("%s", flag ? "yes" : "no");
    return 0;
}*/

/*#include <stdio.h> //3.3.6 Условное тернарное выражение

int main() {
    short a, b, c;
    double s;
    if (scanf("%hd, %hd, %hd", &a, &b, &c) != 3) {
        printf("n/a");
        return 1;
    }
    s = (a + b) / 2.0 * c;
    printf("%.1lf", s);
    return 0;
}*/

/*#include <stdio.h> //3.4.1 Оператор switch. Ключевое слово break

int main() {
    char symbol;
    if (scanf("%c", &symbol) != 1) {
        printf("Input error.");
        return 0;
    }
    switch (symbol) {
    case 'a':
        symbol = 'A';
        break;
    case 'b':
        symbol = 'B';
        break;
    case 'c':
        symbol = 'C';
        break;
    case 'd':
        symbol = 'D';
        break;
    case 'e':
        symbol = 'E';
        break;
    case 'f':
        symbol = 'F';
        break;
    default:
        break;
    }
    printf("%c", symbol);
    return 0;
}*/

/*#include <stdio.h> //3.4.2 Оператор switch. Ключевое слово break

int main() {
    char menu_item;
    short menu_number = 0;

    printf(
        "a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if (scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }
    switch (menu_item) {
        case 'a':
        case 'A':
            menu_number = 1;
            break;
        case 'b':
        case 'B':
            menu_number = 2;
            break;
        case 'c':
        case 'C':
            menu_number = 3;
            break;
        case 'd':
        case 'D':
            menu_number = 4;
            break;
        default:
            menu_number = -1;
            break;
    }
    printf("%hd", menu_number);
    return 0;
}*/

/*#include <stdio.h> //3.4.3 Оператор switch. Ключевое слово break

int show_menu() {
    char menu_item;

    printf(
        "a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");
    if (scanf("%c", &menu_item) != 1) {
        printf("n/a");
        return 1;
    }
    switch (menu_item) {
        case 'a':
        case 'A':
            menu_item = 1;
            return menu_item;
        case 'b':
        case 'B':
            menu_item = 2;
            return menu_item;
        case 'c':
        case 'C':
            menu_item = 3;
            return menu_item;
        case 'd':
        case 'D':
            menu_item = 4;
            return menu_item;
    }
    return -1;
}

int main() {
    int item = show_menu();
    printf("%d", item);
    return 0;
}*/

/*#include <stdio.h> //3.4.4 Оператор switch. Ключевое слово break

int main() {
    int number;
    int flag = 0;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    if (number / 1000 == 3)
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h> //3.5.1 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции

int main() {
    unsigned char b, not_b;
    scanf("%hhu", &b);

    not_b = ~b;
    printf("%hu", not_b);
    return 0;
}*/

/*#include <stdio.h> //3.5.2 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (Проверка на включенность байта)

int main() {
    unsigned char bits, mask;
    scanf("%hhu", &bits);
    mask = 40;
    if ((bits & mask) == mask)
        printf("%hu", bits);
    else
        printf("-1");
    return 0;
}*/

/*#include <stdio.h> //3.5.3 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (выключение бита)

int main() {
    unsigned char bits;
    unsigned char off_bits;
    scanf("%hhu", &bits);
    off_bits = 192;
    bits = bits & ~off_bits;
    printf("%hu", bits);
    return 0;
}*/

/*#include <stdio.h>  //3.5.4 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (включение бита)

int main() {
    unsigned char bits, mask;
    scanf("%hhu", &bits);
    mask = 21;
    bits = bits | mask;
    printf("%hu", bits);
    return 0;
}*/

/*#include <stdio.h> //3.5.5 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (переключение бита)

int main() {
    unsigned char bits, mask;
    scanf("%hhu", &bits);
    mask = 9;
    bits = bits ^ mask;
    printf("%hu", bits);
    return 0;
}*/

/*#include <stdio.h> //3.5.6 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (сдвиг бита вправо)

int main() {
    unsigned char number, number_2;
    if (scanf("%hhu", &number) != 1) {
        printf("n/a");
        return 1;
    }
    number_2 = number >> 2;
    printf("%hu", number_2);
    return 0;
}*/

/*#include <stdio.h>  //3.5.7 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции (сдвиг бита влево)

int main() {
    int number, number_2;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    number_2 = number << 3;
    printf("%d", number_2);
    return 0;
}*/

/*#include <stdio.h>  //3.5.8 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции

int main() {
    int number, number_2, res;
    if (scanf("%d%d", &number, &number_2) != 2) {
        printf("n/a");
        return 1;
    }
    number = number >> 1;
    number_2 = number_2 >> 1;
    res = number * number_2;
    printf("%d", res);
    return 0;
}*/

/*#include <stdio.h> //3.5.9 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции

int main() {
    unsigned char flags, mask;
    if (scanf("%hhu%hhu", &flags, &mask) != 2) {
        printf("n/a");
        return 1;
    }
    if ((flags & mask) == mask)
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h>  //3.5.10 Битовые операции И, ИЛИ, НЕ, XOR. Сдвиговые
операции

int main() {
    int flags, mask;
    if (scanf("%d%d", &flags, &mask) != 2) {
        printf("n/a");
        return 1;
    }
    if (((flags & mask) != 0))
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h> //3.6.1 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdlib.h>

int main() {
    int a = rand();
    int b = rand();
    int c = rand();
    int f = rand();
    printf("%d %d %d %d", a, b, c, f);
    return 0;
}*/

/*#include <stdio.h>  //3.6.2 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdlib.h>

int main() {
    int N;
    int n1, n2, n3, n4, n5, n6, n7;
    scanf("%d", &N);
    n1 = rand() % (N + 1);
    n2 = rand() % (N + 1);
    n3 = rand() % (N + 1);
    n4 = rand() % (N + 1);
    n5 = rand() % (N + 1);
    n6 = rand() % (N + 1);
    n7 = rand() % (N + 1);
    printf("%d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7);
    return 0;
}*/

/*#include <stdio.h>  //3.6.3 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdlib.h>

int main() {
    int a, b;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    scanf("%d %d", &a, &b);
    n1 = rand() % (b - a + 1) + a;
    n2 = rand() % (b - a + 1) + a;
    n3 = rand() % (b - a + 1) + a;
    n4 = rand() % (b - a + 1) + a;
    n5 = rand() % (b - a + 1) + a;
    n6 = rand() % (b - a + 1) + a;
    n7 = rand() % (b - a + 1) + a;
    n8 = rand() % (b - a + 1) + a;
    n9 = rand() % (b - a + 1) + a;
    n10 = rand() % (b - a + 1) + a;
    printf("%d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9,
n10); return 0;
}*/

/*#include <stdio.h>  //3.6.4 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdlib.h>
// #define RAND_MAX 32767

int main() {
    int a, b;
    double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    scanf("%d %d", &a, &b);
    n1 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n2 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n3 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n4 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n5 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n6 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n7 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n8 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n9 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    n10 = (double)rand() / (double)RAND_MAX * (b - a) + a;
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf", n1,
n2, n3, n4, n5, n6, n7, n8, n9, n10); return 0;
}*/

/*#include <stdio.h> //3.6.5 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdlib.h> #include <time.h>

int main() {
    int r1, r2, r3, r4, r5;
    srand(time(NULL));
    r1 = rand();
    r2 = rand();
    r3 = rand();
    r4 = rand();
    r5 = rand();
    return 0;
}*/

/*#include <stdio.h> //3.6.6 Генерация псевдослучайных чисел. Математическая
библиотека #include <math.h> #define A 100 #define B 7

int main() {
    unsigned short N, day;
    scanf("%hu", &N);
    day = ceil(B * N / (double)A);
    printf("%hu", day);
    return 0;
}*/

/*#include <math.h>  //3.6.7 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdio.h> #define D 2.54

int main() {
    unsigned short N;
    unsigned short N_sm;
    scanf("%hu", &N);
    N_sm = round(N * D);
    printf("%hu", N_sm);
    return 0;
}*/

/*#include <math.h>  //3.6.8 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdio.h>

int main() {
    double rect, rect_rad, res;
    double pi = acos(-1);
    if (scanf("%lf", &rect) != 1) {
        printf("n/a");
        return 1;
    }
    rect_rad = rect * pi / 180;
    res = sin(rect_rad);
    printf("%.1lf", res);
    return 0;
}*/

/*#include <math.h>  //3.6.9 Генерация псевдослучайных чисел. Математическая
библиотека #include <stdio.h>

int main() {
    int a, b;
    double tan_rad, tan_1;
    scanf("%d, %d", &a, &b);
    tan_1 = (double)a / b;
    tan_rad = atan(tan_1);
    printf("%.2lf %.2lf", tan_1, tan_rad);
    return 0;
}*/

/*#include <stdio.h> //3.7.1 Директивы макропроцессора #define и #undef

#define KMH  3600. / 1000

int main() {
    int s_mc;
    double s_kmh;
    scanf("%d", &s_mc);
    s_kmh = s_mc * KMH;
    printf("%.2lf", s_kmh);

    // здесь продолжайте программу

    return 0;
}*/

/*#include <stdio.h>  //3.7.2 Директивы макропроцессора #define и #undef

#define PI 3.1415
#define GRAD 180 / PI

int main() {
    double rad;
    double grad;
    scanf("%lf", &rad);
    grad = rad * GRAD;
    printf("%.2lf", grad);
    return 0;
}*/

/*#include <stdio.h>  //3.7.3 Директивы макропроцессора #define и #undef
#define MAX_WIDTH 256
#define MAX_HEIGHT 500

int main() {
    double width, height;
    if (scanf("%lf %lf", &width, &height) != 2) {
        printf("n/a");
        return 1;
    }
    if (width > MAX_WIDTH) width = MAX_WIDTH;
    if (height > MAX_HEIGHT) height = MAX_HEIGHT;
    printf("%.1lf %.1lf", width, height);
    return 0;
}*/

/*#include <math.h>  //3.7.4 Директивы макропроцессора #define и #undef
#include <stdio.h>
#define MAX_LENGTH 100

int main() {
    unsigned int x, y;
    double length;
    if (scanf("%d %d", &x, &y) != 2) {
        printf("n/a");
        return 1;
    }
    length = sqrt(pow(x, 2) + pow(y, 2));
    length > MAX_LENGTH ? printf("Radius length exceeds value of MAX_LENGTH") :
printf("%.2lf", length); return 0;
}*/

/*#include <stdio.h>  //3.7.5 Директивы макропроцессора #define и #undef
#define MAX_BUFF_SIZE 1024

int main() {
    unsigned int buff_size;
    if (scanf("%d", &buff_size) != 1) {
        printf("n/a");
        return 1;
    }
    buff_size > MAX_BUFF_SIZE ? (buff_size = MAX_BUFF_SIZE) : 0;
    printf("%d", buff_size);
    return 0;
}*/

/*#include <stdio.h>  // 3.8.1 Макросы. Операции # и ##

#define MAX_WIDTH 1280
#define GET_WIDTH(W) (W <= MAX_WIDTH ? W : MAX_WIDTH)
#define OUT(R) printf("width = %d", R)

int main() {
    int width;
    scanf("%d", &width);
    width = GET_WIDTH(width);
    OUT(width);
    return 0;
}*/

/*#include <stdio.h>  // 3.8.2 Макросы. Операции # и ##
#define GET_MAX(A, B) ((A) > (B) ? (A) : (B))

int main() {
    double val_1, val_2;
    if (scanf("%lf; %lf", &val_1, &val_2) != 2) {
        printf("Input error");
        return 0;
    }
    double res = GET_MAX(val_1 + 1, val_2 - 1) / (val_1 + val_2);
    printf("%.2lf", res);
    return 0;
}*/

/*#include <math.h>  //3.8.3 Макросы. Операции # и ##
#include <stdio.h>
#define GIPOT(X,Y) sqrt(((X) *(X) +(Y) * (Y)))

int main() {
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }
    printf("%.2lf", GIPOT(a + 3, b - 2));
    return 0;
}*/

/*#include <stdio.h>  //3.8.4 Макросы. Операции # и ##
#define MUL_VAR_NAME(A, B) mul_##A##_##B

int main() {
    int one_1, two_2;
    if (scanf("%d %d", &one_1, &two_2) != 2) {
        printf("n/a");
        return 1;
    }
    int MUL_VAR_NAME(one_1, two_2);
    printf("%d", mul_one_1_two_2 = one_1 * two_2);
    return 0;
}*/

/*#include <stdio.h>  //3.9 Директивы #include и условной компиляции
#define PERIMETR_CALC

int main() {
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2) {
        printf("Input error.");
        return 0;
    }
#ifndef PERIMETR_CALC
    int res = a * b;
    printf("%d", res);
#else
    int res = 2 * (a + b);
    printf("%d", res);
#endif
    return 0;
}*/

/*#include <stdio.h>  //4.1.1 Оператор цикла while

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) printf("%d ", n * n);
    return 0;
}*/

/*#include <stdio.h>  //4.1.2 Оператор цикла while

int main() {
    int n;
    double res = 0;
    int i = 1;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    while (i <= n) {
        res += 1.0 / (i * i);
        i++;
    }
    printf("%.3lf", res);
    return 0;
}*/

/*#include <stdio.h>  //4.1.3 Оператор цикла while

int main() {
    int n, res = 0;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    while (n > 0) {
        int number = n % 10;
        res += number;
        n = n / 10;
    }
    printf("%d", res);
    return 0;
}*/

/*#include <stdio.h>  //4.1.5 Оператор цикла while

int main() {
    int n;
    int i = 2;
    int number_1 = 1, number_2 = 1;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    printf("%d %d ", number_1, number_2);
    while (n > i) {
        int next_number = 0;
        next_number += number_1 + number_2;
        number_1 = number_2;
        number_2 = next_number;
        printf("%d ", next_number);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.1.6 Оператор цикла while

int main() {
    int n, m;
    if (scanf("%d%d", &n, &m) != 2) {
        printf("n/a");
        return 1;
    }
    while (n <= m) {
        if (!(n % 3)) printf("%d ", n);
        n++;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.1.7 Оператор цикла while

int main() {
    int n = 100, m = 999;
    while (n <= m) {
        if (n % 47 == 6 || n % 53 == 45) printf("%d ", n);
        n++;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.1.8 Оператор цикла while

int main() {
    int number;
    int new_number = 0;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    int temp = number;
    while (temp > 0) {
        new_number = (new_number * 10) + (temp % 10);
        temp = temp / 10;
    }
    if (new_number == number)
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h>  //4.1.9 Оператор цикла while (наибольший общий делитель
(НОД) двух натуральных чисел)

int main() {
    int a, b;
    int max, min = 0;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    if (a > b) {
        min = b;
        max = a;
    } else {
        min = a;
        max = b;
    }
    while (min > 0) {
        int temp = max % min;
        max = min;
        min = temp;
    }
    printf("%d", max);
}*/

/*#include <stdio.h>  //4.2.1 Оператор цикла for

int main() {
    int s = 0, n = 0;
    scanf("%d", &n);
    int i = 5;
    for (; i++ <= n; s += i) {
    }

    printf("%d", s);
    return 0;
}*/

/*#include <stdio.h>  //4.2.2 Оператор цикла for

int main() {
    int a1, d, n;
    scanf("%d; %d; %d", &a1, &d, &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a1);
        a1 += d;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.2.3 Оператор цикла for

int main() {
    int b1, q, n;
    scanf("%d; %d; %d", &b1, &q, &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", b1);
        b1 *= q;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.2.4 Оператор цикла for

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 0; i < n; i++) printf("=");
    return 0;
}*/

/*#include <stdio.h>  //4.2.5 Оператор цикла for

int main() {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    for (int number = a; a <= number && b >= number; number++) {
        if (number % 2 == 0) printf("%d ", number);
    }
}*/

/*#include <stdio.h>  //4.2.6 Оператор цикла for

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    return 0;
}*/

/*#include <stdio.h>  //4.2.7 Оператор цикла for

int main() {
    int n;
    int sum = 0;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 3; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.2.8 Оператор цикла for

int main() {
    int number, sum = 0;
    int step = 1;
    while (scanf("%d", &number) == 1 && number != 0) {
        number = number * step;
        sum = sum * 10 + number;
    }
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.2.9 Оператор цикла for

int main() {
    int number, number_2 = 0;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    while (number != 0) {
        number_2 = (number_2 * 10) + (number % 10);
        number = number / 10;
    }
    printf("%d", number_2);
    return 0;
}*/

/*#include <stdio.h>  //4.2.10 Оператор цикла for

int main() {
    int number;
    int left = 0, right = 0;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 1;
    }
    for (; number >= 999;) {
        right += number % 10;
        number /= 10;
    }
    for (; number != 0;) {
        left += number % 10;
        number /= 10;
    }
    if (right == left)
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h>  //4.3.1 Цикл do-while с постусловием. Вложенные циклы

int main() {
    int p = 1, n;
    int i = 1;
    scanf("%d", &n);
    do {
        p *= i;
        i++;
    } while (i <= n);
    printf("%d", p);

    return 0;
}*/

/*#include <stdio.h> //4.3.2 Цикл do-while с постусловием. Вложенные циклы

int main() {
    int number;
    int sum = 0;
    do {
        if (scanf("%d", &number) != 1) {
            printf("n/a");
            return 1;
        }
        if (number > 0) sum += number;
    } while (number != 13);
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.3.3 Цикл do-while с постусловием. Вложенные циклы

int main() {
    unsigned int n;
    double sum = 0.0;
    unsigned int i = 1;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    do {
        sum += 1.0 / i;
        i++;
    } while (i <= n);
    printf("%.2lf", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.3.4 Цикл do-while с постусловием. Вложенные циклы
(Угадай число) #include <stdlib.h>

int main() {
    int x;
    int a = 1, b = 1000;
    int m;
    if (scanf("%d", &x) != 1) {
        printf("n/a");
        return 1;
    }
    do {
        m = rand() % (b - a + 1) + a;  // генерация случайного числа в заданном
диапозоне if (m == x) { printf("%d", x); } else if (m < x) { a = m; } else { b =
m;
        }
    } while (m != x);
    return 0;
}*/

/*#include <stdio.h>  //4.3.5 Цикл do-while с постусловием. Вложенные циклы

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j != 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>  //4.3.6 Цикл do-while с постусловием. Вложенные циклы
(СЛОЖНАЯ ЗАДАЧА ДО КОНЦА НЕ РАЗОБРАЛСЯ)

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 1; i <= n; i++) {         // Печать треугольника
        for (int k = 0; k < n - i; k++) {  // Добавляем отступы слева
            printf(" ");
        }
        for (int j = 0; j < i; j++) {  // Выводим звезды
            printf("*");
        }
        for (int j = 1; j < i; j++) {  // Печать второй половины звездочек (для
симметрии) printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>  //4.3.7 Цикл do-while с постусловием. Вложенные циклы

int main() {
    int a, b;
    int number_1 = 0, number_2 = 0, number_3 = 0;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    for (; a <= b; a++) {
        number_1 = a % 10;
        number_2 = (a / 10) % 10;
        number_3 = a / 100;
        if (number_1 != number_2 && number_1 != number_3 && number_2 !=
number_3) printf("%d ", a);
    }
    return 0;
}*/

/*#include <stdio.h>  //4.3.8 Цикл do-while с постусловием. Вложенные циклы

int main() {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    for (; a <= b; a++) {
        int c = 0;
        int temp = a;
        for (; temp > 0; temp /= 10) {
            c = (c * 10) + (temp % 10);
            if (c == a) printf("%d ", a);
        }
    }
    return 0;
}*/

/*#include <math.h>  //4.3.9 Цикл do-while с постусловием. Вложенные циклы
#include <stdio.h>

int main() {
    int m, n, k;
    double func = 0.0, sum = 0.0;
    if (scanf("%d%d%d", &m, &n, &k) != 3) {
        printf("n/a");
        return 1;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            for (int t = 1; t <= k; t++) {
                func += pow(j, 2) / (pow(i + t, 3) - t);
            }
        }
    }
    sum = func / (m + n + k);
    printf("%.4lf", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.4.1 Операторы break, continue и goto

int main() {
    int n = 5, m = 7;
    int total = 5;

    for (int i = 0; i < total; ++i) {
        int x, y;
        scanf("%d, %d", &x, &y);
        if ((x > n || x == 0)  || (y > m || y == 0)) continue;
        printf("(%d, %d)\n", x, y);
    }
    return 0;
}*/

/*#include <stdio.h> //4.4.2 Операторы break, continue и goto

int main() {
    int number;
    int res = 1;
    while ((scanf("%d", &number) == 1) && number != 0) {
        if (number < 0) continue;
        res *= number;
    }
    printf("%d", res);
    return 0;
}*/

/*#include <math.h>  //4.4.3 Операторы break, continue и goto
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    for (int i = 1; i < n; i++) {
        if (pow(i, 2) >= n) break;
        printf("%d ", i);
    }
    return 0;
}*/

/*#include <stdio.h>  //4.4.4 Операторы break, continue и goto

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    int temp = n;
    for (int i = 2; i <= temp; i++) {
        if ((temp % i) > 0) {
            continue;
        }
        if (temp % i == 1) {
            break;
        }
        if (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
            i--;
        }
    }
    return 0;
}*/

/*#include <stdio.h>  //4.4.5 Операторы break, continue и goto

int main() {
    int n, m;
    int sum = 0;
    if (scanf("%d%d", &n, &m) != 2) {
        printf("n/a");
        return 1;
    }
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++) {
            if (i + j >= 10) goto exit_sum;
            sum += i + j;
        }
exit_sum:
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //4.4.6 Операторы break, continue и goto

int main() {
    int n, m;
    int sum = 0;
    if (scanf("%d%d", &n, &m) != 2) {
        printf("n/a");
        return 1;
    }
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++) {
            if (i + j >= 10) break;
            sum += i + j;
        }
    printf("%d", sum);
    return 0;
}*/

/*#include <math.h>    //4.4.7 Операторы break, continue и goto
#include <stdio.h>

int main() {
    int n;
    int temp = 0;
    int flag = 0;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }
    if (n % 2 == 0)
        temp = 2;
    else
        temp = 3;
    for (int i = temp; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        } else {
            flag = 0;
        }
    }
    if (flag == 1)
        printf("no");
    else
        printf("yes");
    return 0;
}*/

/*#include <stdio.h>  //4.5.1 Указатели. Проще простого

int main() {
    double var_d = 0;
    double *ptr_var_d;
    ptr_var_d = &var_d;
    *ptr_var_d = -54.38;
    return 0;
}*/

/*#include <stdio.h>  //4.5.2 Указатели. Проще простого

int main() {
    int init, k;
    int *ptr_k = &k;
    scanf("%d", &init);
    k = init;
    *ptr_k += 10;
    return 0;
}*/

/*#include <stdio.h>  //4.5.3 Указатели. Проще простого

int main() {
    short a, b;
    short *ptr_a = &a;
    scanf("%hd", &b);
    *ptr_a = b;
    printf("%d", a);
    return 0;
}*/

/*#include <stdio.h>  //4.5.4 Указатели. Проще простого

int main() {
    short a, b, init_a, init_b;
    short *ptr_a, *ptr_b;
    scanf("%hd, %hd", &a, &b);
    ptr_a = &a;
    ptr_b = &b;
    init_a = a;
    init_b = b;
    *ptr_a = init_b;
    *ptr_b = init_a;
    return 0;
}*/

/*#include <stdio.h>  //4.5.5 Указатели. Проще простого

int main() {
    short a, b, res = 0;
    scanf("%hd, %hd", &a, &b);
    short *ptr_a = &a;
    short *ptr_b = &b;
    res = (*ptr_a) * (*ptr_b);
    printf("%d", res);
    return 0;
}*/

/*#include <stdio.h>  //4.6.1 Указатели. Проще простого

int main() {
    short a, b;
    scanf("%hd, %hd", &a, &b);
    short *ptr_a, *ptr_b;
    void *ptr;
    ptr_a = &a;
    ptr_b = &b;
    ptr = ptr_b;
    ptr_b = ptr_a;
    ptr_a = ptr;
    printf("%d %d", *ptr_a, *ptr_b);
    return 0;
}*/

/*#include <stdio.h>  //4.6.2 Указатели. Проще простого

int main() {
    int var;
    int *ptr_var = &var;
    char *ptr_ch = (char *)ptr_var;
    scanf("%d", &var);
    printf("%d", *ptr_ch);
    return 0;
}*/

/*#include <stdio.h>  //4.6.3 Указатели. Проще простого

int main() {
    short var;
    scanf("%hd", &var);
    short *ptr_var = &var;
    char *ptr_ch;
    ptr_ch = (char *)ptr_var;
    *ptr_ch = 2;
    printf("%d", var);
    return 0;
}*/

/*#include <stdio.h>  //4.7.1 Долгожданная адресная арифметика

int main() {
    double value;
    scanf("%lf", &value);
    char *ptr = (char*)&value;
    for (double i = 0; i < sizeof(value); ++i) {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}*/

/*#include <stdio.h>  //4.7.2 Долгожданная адресная арифметика

int main() {
    int value;
    scanf("%d", &value);
    short *ptr = (short *)&value;
    for (size_t i = 0; i < sizeof(value); i++) {
        (*ptr)++;
        ptr++;
    }
    printf("%d", value);
    return 0;
}*/

/*#include <stdio.h>  //4.7.3 Долгожданная адресная арифметика

int main() {
    int count;
    if (scanf("%d", &count) != 1) {
        printf("n/a");
        return 1;
    }
    char *ptr_count = (char *)&count;
    for (size_t i = 0; i < sizeof(count); i++) {
        int mask = 9;
        *ptr_count = *ptr_count | mask;
        ptr_count++;
    }
    printf("%d", count);
    return 0;
}*/

/*#include <stdio.h>  //4.7.4 Долгожданная адресная арифметика

int main() {
    int count;
    if (scanf("%d", &count) != 1) {
        printf("n/a");
        return 1;
    }
    char *ptr_count = (char *)&count;
    for (size_t i = 0; i < sizeof(count); i++) {
        int mask = 61;
        *ptr_count = *ptr_count & mask;
        ptr_count++;
    }
    printf("%d", count);
    return 0;
}*/

/*#include <stdio.h>  //4.7.5 Долгожданная адресная арифметика

int main() {
    int a, b, c, d;
    if (scanf("%d%d%d%d", &a, &b, &c, &d) != 4) {
        printf("n/a");
        return 1;
    }
    double free = 0.5;
    if (((c < a && d < b) && ((double)a - c >= free && (double)b - d >= free))
||
        ((d < a && c < b) && ((double)a - d >= free && (double)b - c >= free)))
        printf("yes");
    else
        printf("no");
    return 0;
}*/

/*#include <stdio.h>  //5.1.1 Введение в массивы

int main() {
    short buffer[1024];
    buffer[0] = 13;
    return 0;
}*/

/*#include <stdio.h>  //5.1.2 Введение в массивы

int main() {
    double func[28];
    int x;
    scanf("%lf", &x);
    func[6] = x;
    return 0;
}*/

/*#include <stdio.h>  //5.1.3 Введение в массивы
#define N 5

int main() {
    int digits[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &digits[i]);
        printf("%d ", digits[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.1.4 Введение в массивы
#define TOTAL 5

int main() {
    int ar_1[TOTAL];
    int ar_2[TOTAL * 2];
    for (int i = 0; i < TOTAL; i++) scanf("%d", &ar_1[i]);
    for (int i = 0; i < TOTAL * 2; i++) {
        if (i < TOTAL)
            ar_2[i] = ar_1[i];
        else
            ar_2[i] = -1;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.2.1 Вычисление размера массива. Инициализация массивов

int main() {
    short marks[] = {3, 5, 4, 7, 0, 10, 45, 76, 89, 345};
    size_t size_marks = sizeof(marks) / sizeof(marks[0]);
    size_t byte_marks = sizeof(marks[0]) * size_marks;
    printf("%zu %zu", size_marks, byte_marks);
    return 0;
}*/

/*#include <stdio.h>  //5.2.2 Вычисление размера массива. Инициализация массивов

int main() {
    float pows[] = {3.5, 5.5, 4.3, 7.4, 0.2, 10.4, 45.3, 76.2, 89.0};
    size_t pows_size = sizeof(pows) / sizeof(pows[0]);

    for (int i = pows_size - 1; i > -1; i--) printf("%.1f ", pows[i]);
    return 0;
}*/

/*#include <stdio.h>  //5.2.3 Вычисление размера массива. Инициализация массивов

int main() {
    long digits[128] = {[16] = 4, [32] = 5, [64] = 6};
    return 0;
}*/

/*#include <stdio.h>  //5.2.4 Вычисление размера массива. Инициализация массивов

int main() {
    short ar_rnd[64] = {0};
    for (int i = 0; i < 5; i++) scanf("%hd", &ar_rnd[i]);
    return 0;
}*/

/*#include <stdio.h>  //5.2.5 Вычисление размера массива. Инициализация массивов

int main() {
    short marks[] = {3, 5, 6, 7, 8, 1, 3};
    size_t marks_size = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;
    double res = 0;
    for (int i = 0; i < (int)marks_size; i++) sum += marks[i];
    res = (double)sum / marks_size;
    printf("%.2lf", res);
    return 0;
}*/

/*#include <stdio.h>  //5.3.1 Указатели на массивы

int main() {
    char buff_1[9] = {4, 5, 2, 3, 3, 6, 7, 8, 11};
    char buff_2[9] = {3, 5, 7, 8, 2, 3, 1, 5, 12};
    char buffer[128];
    char *ptr_ar;
    ptr_ar = buffer;
    size_t buff_1_size = sizeof(buff_1) / sizeof(buff_1[0]);
    size_t buff_2_size = sizeof(buff_2) / sizeof(buff_2[0]);
    for (size_t i = 0; i < buff_1_size; i++) ptr_ar[i] = buff_1[i];
    for (size_t j = buff_1_size; j < buff_1_size + buff_2_size; j++) ptr_ar[j] =
buff_2[j - buff_1_size]; return 0;
}*/

/*#include <stdio.h>  //5.3.2 Указатели на массивы

int main() {
    int value;
    scanf("%d", &value);
    char ar_d[sizeof(value)] = {0};
    char *ar_d_ptr;
    char *value_byte = (char *)&value;
    ar_d_ptr = ar_d;
    for (size_t i = 0; i < sizeof(value); i++) {
        ar_d_ptr[i] = *value_byte;
        printf("%hd ", ar_d[i]);
        value_byte++;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.3.3 Указатели на массивы

#define N 10

int main() {
    int arr[N] = {0};
    int count = 0;
    char c;
    int flag = 0;
    while (count < N && (scanf("%d%c", &arr[count], &c) == 2 && c != '\n')) {
        count++;
    }
    for (int i = 0; i < count; i++) flag += arr[i] % 2;
    printf("%d", flag / count);
    return 0;
}*/

/*#include <stdio.h>  //5.3.4 Указатели на массивы
#define N 20

int main() {
    double arr[N] = {0};
    char c;
    double sum = 0;
    int i = 0;
    while (scanf("%lf%c", &arr[i], &c) == 2 && c != '\n') i++;
    for (int k = 0; k <= i; k++) sum += arr[k];
    sum = sum / (i + 1);
    printf("%.2lf", sum);
    return 0;
}*/

/*#include <stdio.h>  //5.3.5 Указатели на массивы

int main() {
    short var_1;
    int var_2;
    long long var_3;
    size_t i = 0;
    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);
    size_t var_1_b = sizeof(var_1);
    size_t var_2_b = sizeof(var_2);
    size_t var_3_b = sizeof(var_3);
    char *var_1_byte = (char *)&var_1;
    char *var_2_byte = (char *)&var_2;
    char *var_3_byte = (char *)&var_3;

    unsigned char arr_b[var_1_b + var_2_b + var_3_b];
    unsigned char *ptr_arr_b;
    ptr_arr_b = arr_b;
    for (; i < var_1_b; i++) {
        ptr_arr_b[i] = *var_1_byte;
        var_1_byte++;
    }
    for (; i < var_1_b + var_2_b; i++) {
        ptr_arr_b[i] = *var_2_byte;
        var_2_byte++;
    }
    for (; i < var_1_b + var_2_b + var_3_b; i++) {
        ptr_arr_b[i] = *var_3_byte;
        var_3_byte++;
    }
    for (size_t k = 0; k < i; k++) printf("%hu ", arr_b[k]);
    return 0;
}*/

/*#include <stdio.h>  //5.4.1 Указатели на массивы

int main() {
    const int total = 5;
    int marks[100] = {0};
    for (int i = 0; i < total; i++) scanf("%d", &marks[i]);
    for (int i = total - 1; i >= 0; i--) printf("%d ", marks[i]);
    return 0;
}*/

/*#include <stdio.h>  //5.4.2 Указатели на массивы

int main() {
    int ar[100];
    int* const ptr_ar = ar;
    int i = 0;
    while (scanf("%d", &ptr_ar[i]) == 1 && ptr_ar[i] != 78) {
        printf("%d ", ptr_ar[i]);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.5.1 Операции с массивами: копирование, вставка,
удаление, сортировка (написал запутано, можно проще намного)

int main() {
    short ar[10], marks[5];
    int j = 0;
    char c;
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);
    while ((count < sz_ar && scanf("%hd%c", &ar[count], &c) == 2) && c != '\n')
count++; size_t temp = count; int k = count; if (temp > 4) { temp = 4; k = count
- 1;
    }
    int i = temp;
    for (; i >= 0; i--) {
        marks[j] = ar[k];
        printf("%hd ", marks[j]);
        j++;
        k--;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.5.1 Операции с массивами: копирование, вставка,
удаление, сортировка (реализация проще из ответов)

int main(void) {
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while (count < sz_ar && scanf("%hd", &ar[count]) == 1) count++;

    size_t sz_marks = sizeof(marks) / sizeof(*marks);

    for (int i = 0; i < sz_marks && count != 0; i++) {
        marks[i] = ar[--count];
        printf("%d ", marks[i]);
    }

    return 0;
}*/

/*#include <stdio.h>  //5.5.2 Операции с массивами: копирование, вставка,
удаление, сортировка

#define SIZE_BUFFER 128

int main() {
    int buffer[SIZE_BUFFER];
    char c;
    int flag = 0;
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);
    while ((count < sz_ar && scanf("%d%c", &buffer[count], &c) == 2) && c !=
'\n') count++; flag = (count + 1) / 2; if ((count + 1) % 2 == 0) { for (size_t i
= 0; i < (count + 1) / 2; i++, flag++) { int temp = buffer[i]; buffer[i] =
buffer[flag]; buffer[flag] = temp;
        }
    } else {
        for (size_t i = 0; i < (count + 1) / 2; i++, flag++) {
            int temp = buffer[i];
            buffer[i] = buffer[flag + 1];
            buffer[flag + 1] = temp;
        }
    }
    for (size_t i = 0; i <= count; i++) printf("%d ", buffer[i]);
    return 0;
}*/

/*#include <stdio.h>  //5.5.3 Операции с массивами: копирование, вставка,
удаление, сортировка

#define TOTAL 10

int main() {
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);
    char c;
    int insr_index = 0;
    int flag = 0;

    while ((count < sz_ar && scanf("%d%c", &digs[count], &c) == 2) && c != '\n')
count++;

    for (int i = 0; i < (int)count; i++) {
        if (digs[i] == 5) {
            insr_index = i;
            flag = 1;
            break;
        }
    }
    if (flag) {
        if (count != TOTAL) {
            digs[count + 1] = digs[count];
            count++;
        }
        for (int i = (int)count - 1; i > insr_index; i--) {
            digs[i] = digs[i - 1];
        }
        digs[insr_index + 1] = -5;
    }
    for (int i = 0; i < TOTAL; i++) {
        if (digs[i] != 0) printf("%d ", digs[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.5.4 Операции с массивами: копирование, вставка,
удаление, сортировка(в vs работает только с добавлением символа новой строки на
степике без него)

#define TOTAL 10

int main() {
    int digs[TOTAL] = {0};
    size_t count = 0;
    char c;
    int past = -1;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while ((count < sz_ar && scanf("%d%c", &digs[count], &c) == 2)) {
        if (digs[count] == 5) {
            digs[count + 1] = past;
            count++;
            past--;
        }
        count++;
        if (c == '\n') break;
    }
    if (count == TOTAL){
        for (size_t i = 0; i <= count - 1; i++) printf("%d ", digs[i]);
    } else {
        for (size_t i = 0; i < count; i++) printf("%d ", digs[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.5.4 Операции с массивами: копирование, вставка,
удаление, сортировка (второй вариант не читерский)

#define TOTAL 10

int main() {
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);
    char c;
    int insr_index = 0;
    int past = -1;

    while (count < sz_ar && scanf("%d%c", &digs[count], &c) == 2) {
        count++;
        if (c == '\n') break;
    }
    for (size_t i = 0; i < TOTAL - 1; i++) {
        if (digs[i] == 5) {
            insr_index = i;
            for (int j = TOTAL - 1; j > insr_index + 1; j--) {
                digs[j] = digs[j - 1];
            }
            digs[insr_index + 1] = past;
            past--;
            if (count < TOTAL) count++;
        }
    }
    for (size_t i = 0; i < count; i++) {
        printf("%d ", digs[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.5.5 Операции с массивами: копирование, вставка,
удаление, сортировка(в vs работает только с добавлением символа новой строки на
степике без него)

#define TOTAL 20

int main() {
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);
    char c;
    int flag = 0;

    while (count < sz_ar && scanf("%hd%c", &pows[count], &c) == 2) {
        count++;
        if (c == '\n') break;
    }
    for (size_t i = 0; i < count; i++) {
        int del_indx = 0;
        if (pows[i] % 2 == 0) {
            del_indx = i;
            flag = 1;
            for (int j = del_indx; j < TOTAL - 1; j++) {
                pows[j] = pows[j + 1];
            }
            count--;
            break;
        }
        if (flag) {
            break;
        }
    }
    for (size_t k = 0; k < count; k++) printf("%d ", pows[k]);

    return 0;
}*/

/*#include <stdio.h>  //5.5.6 Операции с массивами: копирование, вставка,
удаление, сортировка

#define TOTAL 20

int main() {
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);
    char c;
    // int flag = 0;

    while (count < sz_ar && scanf("%hd%c", &pows[count], &c) == 2) {
        count++;
        if (c == '\n') break;
    }
    for (size_t i = 0; i < count; i++) {
        if (pows[i] % 3 == 0) {
            for (size_t k = i; k < count; k++) pows[k] = pows[k + 1];
            count--;
            i--;
        }
    }
    for (size_t j = 0; j < count; j++) printf("%d ", pows[j]);

    return 0;
}*/

/*#include <stdio.h>  //5.5.7 Операции с массивами: копирование, вставка,
удаление, сортировка

#define TOTAL 20

int main(void) {
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    char c;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f%c", &ws[count], &c) == 2) {
        count++;
        if (c == '\n') break;
    }
    for (size_t i = 0; i < count - 1; i++) {
        int pos = i;
        for (size_t j = i + 1; j < count; j++) {
            if (ws[pos] > ws[j]) {
                float temp = ws[pos];
                ws[pos] = ws[j];
                ws[j] = temp;
            }
        }
    }
    for (size_t j = 0; j < count; j++) printf("%.2f ", ws[j]);

    return 0;
}*/

/*#include <stdio.h>  //5.5.8 Операции с массивами: копирование, вставка,
удаление, сортировка

#define TOTAL 20

int main(void) {
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    char c;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f%c", &ws[count], &c) == 2) {
        count++;
        if (c == '\n') break;
    }
    for (size_t i = count / 2; i < count - 1; i++) {
        int pos = i;
        for (size_t j = i + 1; j < count; j++) {
            if (ws[pos] < ws[j]) {
                float temp = ws[pos];
                ws[pos] = ws[j];
                ws[j] = temp;
            }
        }
    }
    for (size_t j = 0; j < count; j++) printf("%.2f ", ws[j]);

    return 0;
}*/

/*#include <stdio.h>  //5.6.1 Двумерные и многомерные массивы. Указатели на
двумерные массивы

int main() {
    int ar_2D[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) scanf("%d", &ar_2D[i][j]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.6.2 Двумерные и многомерные массивы. Указатели на
двумерные массивы

int main() {
    int ar_2D[4][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) scanf("%d", &ar_2D[i][j]);
    }
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 4; i++) {
            if (i == 3)
                printf("%d", ar_2D[i][j]);
            else
                printf("%d ", ar_2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>  //5.6.3 Двумерные и многомерные массивы. Указатели на
двумерные массивы

#define ROWS 3
#define COLS 5

int main() {
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];
    double mean[ROWS];

    short x;
    for (int i = 0; i < ROWS * COLS && scanf("%hd", &x) == 1; ++i) *ptr_vls++ =
x;

    for (int i = 0; i < ROWS; i++) {
        double sum = 0.0;
        for (int j = 0; j < COLS; j++) {
            sum += vls[i][j];
        }
        mean[i] = sum / COLS;
        printf("%.2lf ", mean[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //5.6.4 Двумерные и многомерные массивы. Указатели на
двумерные массивы

#define ROWS 3
#define COLS 4

int main() {
    int a[ROWS][COLS] = {0};
    int b[ROWS][COLS] = {0};
    int *ptr_a = &a[0][0];
    int *ptr_b = &b[0][0];
    int res[ROWS][COLS] = {0};

    int x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i) *ptr_a++ = x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i) *ptr_b++ = x;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (j == COLS - 1)
                printf("%d", res[i][j] = a[i][j] + b[i][j]);
            else
                printf("%d ", res[i][j] = a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>  //5.6.5 Двумерные и многомерные массивы. Указатели на
двумерные массивы #include <stdlib.h> #include <time.h>

#define SIZE 10
#define MINES 12

int main() {
    char pg[SIZE][SIZE] = {0};
    srand(time(NULL));
    int count = 0;

    while (count < MINES) {
        int random_rows = rand() % SIZE;
        int random_cols = rand() % SIZE;
        if (pg[random_rows][random_cols] == 0 && pg[random_rows][random_cols -
1] == 0 && pg[random_rows][random_cols + 1] == 0 && pg[random_rows -
1][random_cols] == 0 && pg[random_rows + 1][random_cols] == 0 && pg[random_rows
- 1][random_cols - 1] == 0 && pg[random_rows - 1][random_cols + 1] == 0 &&
pg[random_rows + 1][random_cols + 1] == 0 && pg[random_rows + 1][random_cols -
1] == 0) { pg[random_rows][random_cols] = '*'; count++;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (pg[i][j] == '*')
                printf("%c ", pg[i][j]);
            else
                printf("%d ", pg[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>  //5.7.1 Строки. Способы объявления,
escape-последовательности

int main() {
    char str[100] = {"Best string!"};
    str[11] = '.';
    return 0;
}*/

/*#include <stdio.h>  //5.7.2 Строки. Способы объявления,
escape-последовательности

int main() {
    char *text[] = {"language C", "language C++", "language Python"};
    return 0;
}*/

/*#include <stdio.h>  //5.7.3 Строки. Способы объявления,
escape-последовательности

int main() {
    char str[100] = "Best string!";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 's') {
            for(int j = i; str[j] != '\0';j++) {
                str[j] = str[j + 1];
            }
        }
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.7.4 Строки. Способы объявления,
escape-последовательности

int main() {
    char str[50] = "best string!";
    char str_2[4] = "The ";
    size_t str_2_length = sizeof(str_2) / sizeof(str_2[0]);
    size_t str_length = sizeof(str) / sizeof(str[0]);
    for (size_t i = 0; i < str_2_length; i++) {
        for (size_t j = str_length - 1; j > i; j--) {
            str[j] = str[j - 1];
        }
        str[i] = str_2[i];
    }
    return 0;
}*/

/*#include <stdio.h>  //5.7.5 Строки. Способы объявления,
escape-последовательности

int main() {
    char str[50] = "Best   language  \"C\"";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i - 1] != '\n') str[i] = '\n';
        if (str[i] == ' ' && str[i - 1] == '\n') {
            for (int j = i; str[j] != '\0'; j++) str[j] = str[j + 1];
            i--;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) printf("%c", str[i]);
    return 0;
}*/

/*#include <stdio.h>  //5.8.1 Ввод/вывод строк в стандартные потоки

int main() {
    char data[5][10] = {0};
    int i = 0;
    while (i < 5) {
        scanf("%9s", data[i]);
        printf("[%s]\n", data[i]);
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>  //5.8.2 Ввод/вывод строк в стандартные потоки
#define CITY 6

int main() {
    char data[6][20] = {0};
    int i = 0;
    while (i < 6) {
        scanf("%19s", data[i]);
        i++;
    }
    i = CITY - 1;
    while (i >= 0) {
        printf("%s ", data[i]);
        i--;
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>  //5.8.3 Ввод/вывод строк в стандартные потоки
#define CITY 6

int main() {
    char data[6][30] = {0};
    int i = 0;
    while (i < 6) {
        scanf("%29s", data[i]);
        i++;
    }
    i = 0;
    while (i <= CITY - 1) {
        if (data[i][0] == 'G') printf("%s ", data[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>  //5.8.4 Ввод/вывод строк в стандартные потоки

void strip_string(char *str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 1) {
        str -= 2;
        if (*str == '\n') *str = '\0';
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'e') {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
        i++;
    }
    puts(str);
    return 0;
}*/

/*#include <stdio.h>  //5.8.5 Ввод/вывод строк в стандартные потоки

void strip_string(char *str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 1) {
        str -= 2;
        if (*str == '\n') *str = '\0';
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int i = 0, count = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) count++;
        i++;
    }
    printf("%d", count);
    return 0;
}*/

/*#include <stdio.h>  //5.8.6 Ввод/вывод строк в стандартные потоки (неправильно понял задание искал самое
длиное слово в строке)

void strip_string(char* str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 1) {
        str -= 2;
        if (*str == '\n') *str = '\0';
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int i = 0, index = 0;
    int long_word = 0, current_word = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (current_word > long_word) {
                long_word = current_word;
                index = i - current_word;
            }
            current_word = 0;
        } else {
            current_word++;
        }
        i++;
    }

    while (long_word != 0) {
        printf("%c", str[index]);
        index++;
        long_word--;
    }

    return 0;
}*/

/*#include <stdio.h>  //5.8.6 Ввод/вывод строк в стандартные потоки

void strip_string(char* str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 1) {
        str -= 2;
        if (*str == '\n') *str = '\0';
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int i = 0, index_two_word = 0, index_end_first_word = 0, count = 0, count_space = 0, flag = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) count++;
        if (count == 1) {
            index_end_first_word = i;
            for (int j = i; str[j] == ' '; j++) {
                count_space++;
                if (str[j + 1] == '\0') {
                    count_space = 0;
                    break;
                }
            }
        }
        if (count_space) {
            index_two_word = index_end_first_word + count_space;
            flag = 1;
            break;
        }
        i++;
    }
    if (flag) {
        while (str[index_two_word] != ' ' && str[index_two_word] != '\0') {
            printf("%c", str[index_two_word]);
            index_two_word++;
        }
    } else {
        printf("no");
    }
    return 0;
}*/

/*#include <stdio.h>  //5.9.1 Строковые функции strlen(), strcpy(), strncpy(), strcat()
#include <string.h>

int main() {
    char cities[6][50] = {};
    int max = 0;
    int rows = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%s", cities[i]);
        i++;
    }
    for (int i = 0; i < 6; i++) {
        int length = strlen(cities[i]);
        if (length > max) {
            max = length;
            rows = i;
        }
        i++;
    }
    puts(cities[rows]);
    return 0;
}*/

/*5.9.2 Строковые функции strlen(), strcpy(), strncpy(), strcat() (решено 3 способами 1.массив внутри цикла и
ничего каждый раз очищать не надо 2.массив вне цикла и очищение его через функцию memset или 3.цикл for)*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char cities[6][50] = {0};
    // char buff_cities[50] = {0};
    for (int i = 0; i < 6; i++) scanf("%s", cities[i]);

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (strlen(cities[i]) < strlen(cities[j])) {
                char buff_cities[50] = {0};
                // for (size_t k = 0; k < sizeof(buff_cities); k++) buff_cities[k] = '\0';
                // memset(buff_cities, '\0', sizeof(buff_cities));
                strcpy(buff_cities, cities[i]);

                // for (size_t k = 0; k < sizeof(cities[i]); k++) cities[i][k] = '\0';
                // memset(cities[i], '\0', sizeof(cities[i]));
                strcpy(cities[i], cities[j]);

                // for (size_t k = 0; k < sizeof(cities[j]); k++) cities[j][k] = '\0';
                // memset(cities[j], '\0', sizeof(cities[j]));
                strcpy(cities[j], buff_cities);
            }
        }
    }
    for (int i = 0; i < 2; i++) printf("%s ", cities[i]);
    return 0;
}*/

/*#include <stdio.h> //5.9.3 Строковые функции strlen(), strcpy(), strncpy(), strcat()
#include <string.h>

void strip_string(char* str, int max_len) {
    int count = 0;
    while (*str++ != '\0' && count++ < max_len);

    if (count > 1) {
        str -= 2;
        if (*str == '\n') *str = '\0';
    }
}

int main() {
    char str[100], res_str[100] = "I love language C ";
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    size_t max_add = sizeof(res_str) - strlen(res_str) - 1;
    strncat(res_str, str, max_add);
    res_str[sizeof(res_str) - 1] = '\0';
    puts(res_str);
    return 0;
}*/

/*#include <stdio.h>  //5.9.4 Строковые функции strlen(), strcpy(), strncpy(), strcat()
#include <string.h>
#define ROWS 7
#define COLS 50

int main() {
    char ps[ROWS][COLS] = {0};
    char ps_res[COLS * ROWS + 7] = {0};
    size_t max_add = sizeof(ps_res) - strlen(ps_res) - 1;

    for (int i = 0; i < ROWS; i++) {
        scanf("%49s", ps[i]);
    }

    for (int i = 0; i < ROWS; i++) {
        strncat(ps_res, &ps[i][0], max_add);
        if (i < ROWS - 1) {
            size_t max = strlen(ps_res);
            ps_res[max] = ' ';
        }
    }
    puts(ps_res);
    return 0;
}*/

/*#include <stdio.h>  //5.9.5 Строковые функции strlen(), strcpy(), strncpy(), strcat()
#include <string.h>
#define ROWS 7
#define COLS 50

int main() {
    char ps[ROWS][COLS] = {0};
    char ps_res[ROWS * COLS + ROWS] = {0};
    size_t max_add = sizeof(ps_res) - strlen(ps_res) - 1;
    for (int i = 0; i < ROWS; i++) {
        scanf("%49s", ps[i]);
    }

    for (int i = 0; i < ROWS; i++) {
        size_t length = strlen(ps[i]);
        if (length % 2 == 0) {
            strncat(ps_res, &ps[i][0], max_add);
            size_t length_res = strlen(ps_res);
            ps_res[length_res] = ' ';
        }
        if (i == ROWS - 1) {
            size_t length_res_final = strlen(ps_res);
            ps_res[length_res_final - 1] = '\0';
        }
    }
    puts(ps_res);
    return 0;
}*/

/*#include <stdio.h>  //5.9.6 Строковые функции strlen(), strcpy(), strncpy(), strcat()
#include <string.h>
#define ROWS 7
#define COLS 50

int main() {
    char ps[ROWS][COLS] = {0};
    char ps_sort[ROWS * COLS + ROWS] = {0};
    size_t max_add = sizeof(ps_sort) - strlen(ps_sort) - 1;
    for (int i = 0; i < ROWS; i++) {
        scanf("%49s", ps[i]);
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = i + 1; j < ROWS; j++) {
            if (strlen(ps[i]) > strlen(ps[j])) {
                char buff[50] = {0};
                strcpy(buff, ps[i]);
                strcpy(ps[i], ps[j]);
                strcpy(ps[j], buff);
            }
        }
    }
    for (int i = 0; i < ROWS; i++) {
        strncat(ps_sort, &ps[i][0], max_add);
        size_t length_res = strlen(ps_sort);
        ps_sort[length_res] = ' ';
        if (i == ROWS - 1) {
            size_t length_res_final = strlen(ps_sort);
            ps_sort[length_res_final - 1] = '\0';
        }
    }
    puts(ps_sort);
    return 0;
}*/

/*#include <stdio.h>  //5.10.1 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_str = strrchr(str, '\n');
    if (ptr_str != NULL) {
        *ptr_str = '\0';
    }
    printf("[%s]", str);
    return 0;
}*/

/*#include <stdio.h>  //5.10.2 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char* ptr_n = strrchr(str, '\n');
    char* ptr = str;
    int count = 0;
    if (ptr_n != NULL) *ptr_n = '\0';

    while (1) {
        char* ptr_is = strstr(ptr, "is");
        if (ptr_is != NULL) {
            ptr = ptr_is + sizeof("is");
            count++;
        } else {
            break;
        }
    }
    printf("%d", count);
    return 0;
}*/

/*#include <stdio.h>  //5.10.3 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>
#define REMOVE "-+-"

int main() {
    char str[200] = {0};
    char res_str[300] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');

    char *ptr_str = str;
    if (ptr_n != NULL) *ptr_n = '\0';

    while (*ptr_str != '\0') {
        if (*ptr_str != '-') {
            strncat(res_str, ptr_str, 1);
        } else {
            strcat(res_str, REMOVE);
        }
        ptr_str++;
    }
    puts(res_str);
    return 0;
}*/

/*#include <stdio.h>  //5.10.4 Строковые функции сравнения, поиска символов и фрагментов (Решил не сам)
#include <string.h>

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    char *read_ptr = str;
    char *write_ptr = str;
    while (*read_ptr != '\0') {
        if (*read_ptr == '-') {
            while (*read_ptr == '-') {
                read_ptr++;
            }
            *write_ptr++ = '-';
        } else {
            *write_ptr++ = *read_ptr++;
        }
    }
    puts(str);
    return 0;
}*/

/*#include <stdio.h>  //5.10.4 Строковые функции сравнения, поиска символов и фрагментов (более проще, из
ответов) #include <string.h>

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char *dash = strstr(str, "--");

    while(dash != NULL) {
        for(int i = 0; i<strlen(dash); i++) {
                dash[i] = dash[i+1];
        }
        dash = strstr(str, "--");
    }
    puts(str);
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>  //5.10.5 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>

int main() {
    char cities[500] = {0};
    char *ptr_cities = cities;
    char *ptr_prob;
    int max_cities = 10;
    for (int i = 0; i < max_cities; i++) {
        fgets(ptr_cities, sizeof(cities) - strlen(cities) - 1, stdin);
        if (*ptr_cities == '\n') {
            *ptr_cities = '\0';
            max_cities++;
            continue;
        }
        if (strstr(ptr_cities, "на")) {
            continue;
        }
        ptr_prob = strchr(ptr_cities, '\n');
        if (ptr_prob != NULL && i != max_cities - 1) {
            *ptr_prob = ' ';
        }
        if (i == max_cities - 1) {  //с этим фрагментом на степике была проблему, пришлось его
закоментировать. ptr_prob = strrchr(cities, '\n'); *ptr_prob = '\0';
        }
        ptr_cities = ptr_prob + 1;
    }
    puts(cities);
    return 0;
}*/

/*#include <stdio.h>  //5.10.6 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>

int main() {
    char cities[500] = {0};
    int max_cities = 10;
    char *ptr_cities = cities;
    char *ptr_prob;
    for (int i = 0; i < max_cities; i++) {
        char buff_cities[100] = {0};
        char *buff_cities_ptr = buff_cities;
        fgets(buff_cities, sizeof(buff_cities) - strlen(buff_cities), stdin);
        if (*buff_cities_ptr == '\n') {
            *buff_cities_ptr = '\0';
            max_cities++;
            continue;
        }
        if (strstr(cities, buff_cities) != 0 && i != 0) {
            continue;
        }
        strcat(cities, buff_cities);
    }
    for (int i = 0; i <= max_cities; i++) {
        ptr_prob = strrchr(ptr_cities, '\n');
        if (ptr_prob != NULL) {
            *ptr_prob = ' ';
        }
    }
    puts(cities);
    return 0;
}*/

/*#include <stdio.h>  //5.10.7 Строковые функции сравнения, поиска символов и фрагментов
#include <string.h>

int main() {
    char time[10] = {0};
    char time_res[10] = {0};
    char *time_ptr = time;
    char *n_ptr;
    fgets(time, sizeof(time) - strlen(time) - 1, stdin);
    n_ptr = strrchr(time_ptr, '\n');
    if (n_ptr != NULL) *n_ptr = '\0';

    time_res[0] = time[6];
    time_res[1] = time[7];
    time_res[2] = time[2];
    time_res[3] = time[3];
    time_res[4] = time[4];
    time_res[5] = time[5];
    time_res[6] = time[0];
    time_res[7] = time[1];
    puts(time_res);
    return 0;
}*/

/*#include <stdio.h>  //not done ERROR
#include <string.h>

int main() {
    char str[100] = {0};
    char str_pass[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,-.0123456789_@";
    char* str_pass_ptr;
    fgets(str, sizeof(str) - 1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    str_pass_ptr = strpbrk(str_pass, "@");
    if (str_pass_ptr != NULL)
        printf("1");
    else
        printf("0");

    return 0;
}*/

/*#include <stdio.h>  //5.11.1 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <string.h>

int main() {
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);
    char time[100];
    char def[] = "--";
    if (h < 0 || h > 23) {
        const char format[] = "%s:%02d:%02d";
        sprintf(time, format, def, m, s);
    } else if (m < 0 || m > 59) {
        const char format[] = "%02d:%s:%02d";
        sprintf(time, format, h, def, s);
    } else if (s < 0 || s > 59) {
        const char format[] = "%02d:%02d:%s";
        sprintf(time, format, h, m, def);
    } else {
        const char format[] = "%02d:%02d:%02d";
        sprintf(time, format, h, m, s);
    }
    puts(time);
    return 0;
}*/

/*#include <stdio.h>  //5.11.2 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    char *ptr_first = strchr(str, ' ');
    char *ptr_find_x = strchr(str, 'x');
    char *ptr_find_x_end = strrchr(str, 'x');
    int h = atoi(ptr_first + 1);
    int w = atoi(ptr_find_x + 2);
    int d = atoi(ptr_find_x_end + 2);
    printf("%d %d %d", h, w, d);
    return 0;
}*/

/*#include <stdio.h>  //5.11.3 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200] = {0};
    double csv[20] = {0};
    int i = 1;
    int count = 0;
    char *ptr_str = str;
    char *ptr_first_number;

    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    ptr_first_number = strchr(ptr_str, ' ');
    csv[0] = atof(ptr_first_number);

    while (ptr_str != NULL) {
        char *ptr_num = strchr(ptr_str, ';');
        while (ptr_num != NULL) {
            if (*(ptr_num + 1) == ' ') {
                ptr_num++;
                continue;
            } else if (*(ptr_num + 1) != ' ') {
                csv[i] = atof(ptr_num + 1);
                i++;
                count++;
                break;
            } else {
                csv[i] = atof(ptr_num);
                i++;
                count++;
                break;
            }
        }
        ptr_str = strchr(ptr_num + 1, ';');
    }
    for (int j = 0; j <= count; j++) printf("%lf ", csv[j]);
    return 0;
}*/

/*#include <stdio.h>  //5.11.4 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <string.h>

#define TOTAL 10

int main() {
    char str[TOTAL][50];
    int count = 0;
    while (count < TOTAL && fgets(str[count], sizeof(str) - 1, stdin)) {
        char *ptr_n = strrchr(str[count], '\n');
        if (ptr_n != NULL) *ptr_n = '\0';
        count++;
    }

    int new_count = 0;
    for (int i = 0; i < count + 1; i++) {
        if (strstr(str[i], "12300") == NULL) {
            strcpy(str[new_count++], str[i]);
        }
    }
    for (int j = 0; j < count + 1; j++) {
        char *str_ptr = str[j];
        if (*str_ptr != '\0') {
            char *token;
            token = strtok(str_ptr, ":");
            if (*str_ptr == '\0')
                printf("%s", token);
            else
                printf("%s ", token);
        }
    }

    return 0;
}*/

/*#include <stdio.h>  //5.11.5 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <stdlib.h>
#include <string.h>

int main() {
    char stud[200] = {0};
    int number[10] = {0};
    int sum = 0;
    int i = -1;
    fgets(stud, sizeof(stud) - 1, stdin);
    char *ptr_n = strrchr(stud, '\n');
    if (ptr_n != NULL) {
        *ptr_n = '\0';
    }
    char *ptr_number = strtok(stud, " ");
    for (; ptr_number != NULL; i++) {
        number[i] = atoi(ptr_number);
        ptr_number = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++) {
        sum += number[j];
    }
    printf("%.3lf", (double)sum / i);
    return 0;
}*/

/*#include <stdio.h>  //5.11.6 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <stdlib.h>
#include <string.h>

int main() {
    char stud[200] = {0};
    char res[200] = {0};
    fgets(stud, sizeof(stud) - 1, stdin);
    char *ptr_n = strrchr(stud, '\n');
    if (ptr_n != NULL) {
        *ptr_n = '\0';
    }
    char *ptr_stud_1 = strtok(stud, " ");
    int count = 0;
    while (ptr_stud_1 != NULL) {
        strcat(res, ptr_stud_1);
        char *ptr_res = strchr(res, '\0');
        ptr_stud_1 = strtok(NULL, " ");
        if (count == 0) {
            strcat(ptr_res, ": ");
        } else if (count > 0 && ptr_stud_1 != NULL) {
            strcat(ptr_res, ", ");
        }
        count++;
    }
    puts(res);
    return 0;
}*/

/*#include <stdio.h>  //5.11.7 Строковые функции sprintf(), atoi(), atol(), atoll() и atof()
#include <stdlib.h>
#include <string.h>

#define TOTAL 10

int main() {
    char str[TOTAL][50];
    char *p_sort[TOTAL];

    int count = 0;
    while (count < TOTAL && fgets(str[count], sizeof(str) - 1, stdin)) {
        char *ptr_n = strrchr(str[count], '\n');
        if (ptr_n != NULL) *ptr_n = '\0';
        p_sort[count] = str[count];
        count++;
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            char *ptr_str_1 = strrchr(p_sort[i], ' ');
            char *ptr_str_2 = strrchr(p_sort[j], ' ');

            if (ptr_str_1 != NULL && ptr_str_2 != NULL) {
                double num_1 = atof(ptr_str_1);
                double num_2 = atof(ptr_str_2);
                if (num_2 > num_1) {
                    char *temp = p_sort[i];
                    p_sort[i] = p_sort[j];
                    p_sort[j] = temp;
                }
            }
        }
    }
    for (int i = 0; i < count; i++) {
        char *ptr_print = strtok(p_sort[i], ":");
        if (ptr_print != NULL) printf("%s ", ptr_print);
    }

    return 0;
}*/

/*#include <stdio.h>  //6.1.1 Объявление и вызов функций

void show_info(void) { printf("It\'s my first function\n"); }

int main() {
    show_info();
    return 0;
}*/

/*#include <stdio.h>  //6.1.2 Объявление и вызов функций

int fact(int number) {
    if (number < 0) return -1;
    int res = 1;
    for (int i = 1; i <= number; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n = 6;
    printf("%d", fact(n));
    return 0;
}*/

/*#include <math.h>  //6.1.3 Объявление и вызов функций
#include <stdio.h>

int pow_n(int n, int m) {
    if (m == 0) return 1;
    int res = pow(n, m);
    return res;
}

int main() {
    int number_1 = 2, number_2 = 4;
    printf("%d", pow_n(number_1, number_2));
    return 0;
}*/

/*#include <stdio.h>  //6.1.4 Объявление и вызов функций

int get_volume(int h, int w, int d) {
    int res = h * w * d;
    return res;
}

int main() {
    int height, width, depth;
    if (scanf("%d%d%d", &height, &width, &depth) != 3) {
        printf("n/a");
        return 1;
    }
    printf("%d", get_volume(height, width, depth));
    return 0;
}*/

/*#include <stdio.h> //6.2.1 Объявление и вызов функций
#include <stdlib.h>

void read_input(int *a, int *b, int *c) {
    if (scanf("%d%d%d", a, b, c) != 3) {
        printf("n/a");
        exit(1);
    }
}

int is_triangle(int a, int b, int c) {
    if (a + b < c || a + c < b || b + c < a)
        return 0;
    else
        return 1;
}

int main() {
    int a, b, c;
    read_input(&a, &b, &c);
    printf("%d", is_triangle(a, b, c));
    return 0;
}*/

/*#include <stdio.h>  //6.2.2 Объявление и вызов функций

double get_mean2(int number_1, int number_2) { return (number_1 + number_2) / 2.0; }

int main() {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    printf("%.1lf", get_mean2(a, b));
    return 0;
}*/

/*#include <stdio.h>  //6.2.3 Объявление и вызов функций

int get_sum2(int number_1, int number_2) { return number_1 + number_2; }

int main() {
    int a, b, c;
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("n/a");
        return 1;
    }
    printf("%d", get_sum2(get_sum2(a, b), c));
    return 0;
}*/

/*include <stdio.h>  //6.2.4 Объявление и вызов функций

int is_even(int number) {
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if (is_even(x)) printf("%d ", x);
    }
    return 0;
}*/

/*#include <stdio.h>  //6.2.5 Объявление и вызов функций

int is_range(double x, double a, double b) {
    if ((x > a && x < b))
        return 1;
    else
        return 0;
}

int main() {
    double x;
    double range = -2.5, range_2 = 3.5;
    while (scanf("%lf", &x) == 1) {
        if (is_range(x, range, range_2) != 1) printf("%.1lf ", x);
    }
    return 0;
}*/

/*#include <math.h>  //6.2.6 Объявление и вызов функций
#include <stdio.h>

double get_length(int num_1, int num_2) { return sqrt(pow(num_1, 2) + pow(num_2, 2)); }

int main() {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a");
        return 1;
    }
    printf("%.2lf", get_length(a, b));
    return 0;
}*/

/*#include <stdio.h> //6.2.7 Объявление и вызов функций. Инструкция по завершению ввода: Нажмите комбинацию
клавиш Ctrl+D.

double get_qm(double qm_1, int m, int x) {
    double m_double = (double)m;
    double new_qm = ((m_double - 1.0) / m_double) * qm_1 + (1 / m_double * x);
    return new_qm;
}

int main() {
    int x;
    int m = 1;
    double qm = 0.0, qm_1 = 0.0;
    while(scanf("%d", &x) == 1) {
        qm_1 = qm;
        qm = get_qm(qm_1, m, x);
        m++;
    }
    printf("%.3lf", qm);
    return 0;
}*/

/*#include <math.h>  //6.3.1 Прототипы функций
#include <stdio.h>

double get_geom(int a, int b);

int main() {
    int a, b;
    scanf("%d, %d", &a, &b);
    printf("%.2lf", get_geom(a, b));
    return 0;
}

double get_geom(int a, int b) { return (double)sqrt(a * b); }*/

/*#include <stdio.h>  //6.3.2 Прототипы функций

int calc_rect(int w, int h, int type);

int main() {
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);

    printf("%d", calc_rect(a, b, t));
    return 0;
}

int calc_rect(int w, int h, int type) {
    if (type != 1)
        return 2 * (w + h);
    else
        return w * h;
}*/

/*#include <stdio.h>  //6.3.3 Прототипы функций

int get_max(int a, int b);
int get_min(int a, int b);

int main() {
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);
    printf("%d", t == 1 ? get_max(a, b) : get_min(a, b));
    return 0;
}

int get_max(int a, int b) { return a < b ? b : a; }

int get_min(int a, int b) { return a > b ? b : a; }*/

/*#include <math.h>  //6.3.4 Прототипы функций
#include <stdio.h>
#define PI 3.14159265358979323846

double circle_len(double r);

int main() {
    double radius;
    if (scanf("%lf", &radius) != 1) {
        printf("n/a");
        return 1;
    }
    printf("%.2lf", circle_len(radius));
    return 0;
}

double circle_len(double r) { return 2 * PI * r; }*/

#include <stdio.h>  //6.4.1 Указатели как параметры. Передача массивов в функции (До просмотра видео по теме)

int sum_ar(int *n, int count);

int main() {
    int num[10] = {0};
    int *ptr_num = num;
    int i = 0;
    while (scanf("%d", &num[i]) == 1) {
        i++;
    }
    printf("%d", sum_ar(ptr_num, i));
    return 0;
}

int sum_ar(int *n, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *n;
        n++;
    }
    return sum;
}