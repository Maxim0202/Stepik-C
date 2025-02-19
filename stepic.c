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

/*#include <stdio.h>  //6.4.1 Указатели как параметры. Передача массивов в функции (До просмотра видео по
теме)

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
}*/

/*#include <stdio.h>  //6.4.1 Указатели как параметры. Передача массивов в функции (после просмотра видео по
теме)

int sum_ar(int *n, int length);

int main() {
    int num[10] = {0};
    int i = 0;
    while (scanf("%d", &num[i]) == 1) {
        i++;
    }
    printf("%d", sum_ar(num, sizeof(num) / sizeof(num[i])));
    return 0;
}

int sum_ar(int *n, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += n[i];
    }
    return sum;
}*/

/*#include <stdio.h>  //6.4.2 Указатели как параметры. Передача массивов в функции
#define SIZE 20

int prod_ar(const int *arr, int length) {
    int r = 1;
    for (int i = 0; i < length; i++) {
        r *= arr[i];
    }
    return r;
}

int main() {
    int arr_number[SIZE];
    int res = 0;
    int i = 0;
    for (; scanf("%d", &arr_number[i]) == 1; i++) {
    }
    res = prod_ar(arr_number, i);
    printf("%d", res);
    return 0;
}*/

/*#include <stdio.h>  //6.4.3 Указатели как параметры. Передача массивов в функции
#include <string.h>
#define SIZE 20

int to_csv(char *str, double *arr_number, int length) {
    int i = 0;
    for (; i < length; i++) {
        char buff[20] = {0};
        if (i == 0) {
            sprintf(str, "csv: %.2lf;", arr_number[i]);
        } else if (i != length - 1) {
            sprintf(buff, " %.2lf;", arr_number[i]);
            strcat(str, buff);
        } else {
            sprintf(buff, " %.2lf", arr_number[i]);
            strcat(str, buff);
        }
    }
    return i;
}

int main() {
    char str[100];
    double arr_number[SIZE] = {0.0};
    int count = 0;
    for (; scanf("%lf", &arr_number[count]) == 1; count++) {
    }
    to_csv(str, arr_number, count);
    puts(str);
    return 0;
}*/

/*#include <stdio.h>  //6.4.4 Указатели как параметры. Передача массивов в функции
#include <stdlib.h>
#include <string.h>

#define SIZE 20

int get_data_csv(double *number, int length, char *str);

int main() {
    char str[100] = {0};
    double number[SIZE] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    get_data_csv(number, SIZE, str);
    for (int i = 0; number[i] != 0.0; i++) {
        printf("%.2lf ", number[i]);
    }
    return 0;
}

int get_data_csv(double *number, int length, char *str) {
    int count = 0;
    for (; count < length; count++) {
        char *ptr_buff = strstr(str, " ");
        if (ptr_buff != NULL) {
            number[count] = atof(ptr_buff);
            str = ptr_buff + 1;
        } else {
            break;
        }
    }
    return count;
}*/

/*#include <stdio.h>  //6.4.5 Указатели как параметры. Передача массивов в функции

#define SIZE 4

void transpose(short (*matrix)[SIZE]);

int main() {
    short matrix[SIZE][SIZE] = {0};
    short* ptr = &matrix[0][0];
    int count = 0;
    while (count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
        ptr++;
        count++;
    }
    transpose(matrix);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j < SIZE - 1)
                printf("%d ", matrix[i][j]);
            else
                printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void transpose(short (*matrix)[SIZE]) {
    short buff_matrix[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            buff_matrix[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = buff_matrix[i][j];
        }
    }
}*/

/*#include <stdio.h>  //6.4.6 Указатели как параметры. Передача массивов в функции

#define SIZE 3

void show_pole(char (*pole)[SIZE]);

int main() {
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    int val = 0;

    while (count < SIZE * SIZE && scanf("%d", &val) == 1) {
        *ptr_p = (val == 1) ? 'x' : (val == 2) ? 'o' : val;
        ptr_p++;
        count++;
    }
    show_pole(pole);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j != SIZE - 1)
                printf("%c ", pole[i][j]);
            else
                printf("%c", pole[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void show_pole(char (*pole)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (pole[i][j] == '\0') pole[i][j] = '#';
        }
    }
}*/

/*#include <stdio.h>  //6.4.7 Указатели как параметры. Передача массивов в функции

#define SIZE 3

int is_win(char (*ar)[SIZE]);

int main() {
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    int val = 0;
    while (count < SIZE * SIZE && scanf("%d", &val) == 1) {
        *ptr_p = (val == 1) ? 'x' : (val == 2) ? 'o' : val;
        ptr_p++;
        count++;
    }
    //switch (is_win(pole)) {
    //    case 0:
    //        printf("игра не окончена");
    //        break;
    //    case 1:
    //        printf("выиграли \"крестики\"");
    //        break;
    //    case 2:
    //        printf("выиграли \"нолики\"");
    //        break;
    //    case 3:
    //        printf("ничья");
    //        break;
    //    default:
    //        break;
    //}
    printf("%d", is_win(pole));
    return 0;
}

int is_win(char (*ar)[SIZE]) {
    int count_null = 0;
    int flag = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (ar[i][j] == '\0') count_null++;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (ar[i][0] == 'x' && ar[i][0 + 1] == 'x' && ar[i][0 + 2] == 'x') flag = 1;
    }
    for (int j = 0; j < SIZE; j++) {
        if (ar[0][j] == 'x' && ar[0 + 1][j] == 'x' && ar[0 + 2][j] == 'x') flag = 1;
    }
    if ((ar[0][0] == 'x' && ar[1][1] == 'x' && ar[2][2] == 'x') ||
        (ar[0][2] == 'x' && ar[1][1] == 'x' && ar[2][0] == 'x'))
        flag = 1;
    for (int i = 0; i < SIZE; i++) {
        if (ar[i][0] == 'o' && ar[i][0 + 1] == 'o' && ar[i][0 + 2] == 'o') flag = 2;
    }
    for (int j = 0; j < SIZE; j++) {
        if (ar[0][j] == 'o' && ar[0 + 1][j] == 'o' && ar[0 + 2][j] == 'o') flag = 2;
    }
    if ((ar[0][0] == 'o' && ar[1][1] == 'o' && ar[2][2] == 'o') ||
        (ar[0][2] == 'o' && ar[1][1] == 'o' && ar[2][0] == 'o'))
        flag = 2;
    if (count_null >= 5) flag = 0;
    if (count_null == 0) flag = 3;
    return flag;
}*/

/*#include <stdio.h>  //6.5.1 Указатели на функцию. Функция как параметр (callback)
double (*ptr_func)(int, int);

int main() { return 0; }*/

/*#include <stdio.h>  //6.5.2 Указатели на функцию. Функция как параметр (callback)

double max_2(double a, double b) { return (a > b) ? a : b; }

int main() {
    double a, b;
    scanf("%lf, %lf", &a, &b);
    double (*ptr_max_2)(double, double) = max_2;
    printf("%.1lf", ptr_max_2(a, b));
    return 0;
}*/

/*#include <stdio.h>  //6.5.3 Указатели на функцию. Функция как параметр (callback) (программа рабочая, но
на stepik тесты не пропускают реализацию с функцией strpbrk) #include <string.h>

void copy_string(char* dst, size_t max_len_dst, const char* src, int (*ptr_find)(const char*));
int find_symbol(const char* str);

int main() {
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    size_t length = sizeof(str2) / sizeof(*str2) - 1;
    copy_string(str2, length, str, find_symbol);
    puts(str2);
    return 0;
}

void copy_string(char* dst, size_t max_len_dst, const char* src, int (*ptr_find)(const char*)) {
    size_t i = 0, j = 0;
    for (; i < max_len_dst && src[j] != '\0'; j++) {
        char temp[3] = {src[j], '\0'};
        if (ptr_find(temp) != 1)
            continue;
        else
            dst[i++] = src[j];
    }
    dst[i] = '\0';
}

int find_symbol(const char* str) {
    char key[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    if (strpbrk(str, key) != NULL)
        return 0;
    else
        return 1;
}*/

/*#include <stdio.h>  //6.5.4 Указатели на функцию. Функция как параметр (callback)

int sum_ar(const int *ar, size_t len_ar, int (*ptr_check)(int));
int parity_check(int a);

int main() {
    int marks[20] = {0};
    int x;
    size_t i = 0;
    while (scanf("%d", &x) == 1) {
        if (i < sizeof(marks) / sizeof(*marks)) {
            marks[i] = x;
            i++;
        } else {
            break;
        }
    }
    printf("%d", sum_ar(marks, sizeof(marks) / sizeof(*marks), parity_check));
    return 0;
}

int sum_ar(const int *ar, size_t len_ar, int (*ptr_check)(int)) {
    int sum = 0;
    for (size_t i = 0; i < len_ar; i++) {
        if (ptr_check(ar[i])) sum += ar[i];
    }
    return sum;
}

int parity_check(int a) {
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}*/

/*#include <stdio.h>  //6.5.5 Указатели на функцию. Функция как параметр (callback)

int is_odd(int a);       // возвращает 1 для нечетных значений и 0 для четных;
int is_positive(int a);  // возвращает 1 для неотрицательных значений и 0 для отрицательных
int is_negative(int a);  // возвращает 1 для отрицательных значений и 0 для неотрицательных
int deflt(int a);        // возвращает 1 для любых значений
int sum_ar(const int *ar, size_t len_ar, int (*ptr_func)(int));

int main() {
    int (*criterials[])(int) = {is_odd, is_positive, is_negative, deflt};
    int marks[20] = {0};

    int item = 0;
    scanf("%d", &item);

    int x;
    int i = 0;
    while (scanf("%d", &x) == 1) {
        if (i < 20) {
            marks[i] = x;
            i++;
        } else {
            break;
        }
    }

    int sum = 0;
    switch (item) {
        case 1:
            sum = sum_ar(marks, sizeof(marks) / sizeof(*marks), criterials[0]);
            break;
        case 2:
            sum = sum_ar(marks, sizeof(marks) / sizeof(*marks), criterials[1]);
            break;
        case 3:
            sum = sum_ar(marks, sizeof(marks) / sizeof(*marks), criterials[2]);
            break;
        default:
            sum = sum_ar(marks, sizeof(marks) / sizeof(*marks), criterials[3]);
            break;
    }

    printf("%d", sum);
    return 0;
}

int sum_ar(const int *ar, size_t len_ar, int (*ptr_func)(int)) {
    int sum = 0;
    for (size_t i = 0; i < len_ar; i++) {
        if (ptr_func(ar[i])) sum += ar[i];
    }
    return sum;
}

int is_odd(int a) {
    if (a % 2 == 0)
        return 0;
    else
        return 1;
}
int is_positive(int a) {
    if (a < 0)
        return 0;
    else
        return 1;
}
int is_negative(int a) {
    if (a > 0)
        return 0;
    else
        return 1;
}
int deflt(int a) {
    int flag = 0;
    if (a <= 0 || a > 0) flag = 1;
    return flag;
}*/

/*#include <ctype.h>  //6.5.6 Указатели на функцию. Функция как параметр (callback)
#include <stdio.h>
#include <string.h>

int match_ab(const char a, const char b);
void sort_string(char *str, size_t max_len, int (*crit)(char, char));

int main() {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    size_t length = strlen(str);
    sort_string(str, length, match_ab);
    puts(str);
    return 0;
}

int match_ab(const char a, const char b) {
    if (isdigit(a) && isdigit(b)) return a < b ? 1 : 0;
    if (!(isdigit(a)) && !(isdigit(b))) return a < b ? 1 : 0;
    return isdigit(a) ? 1 : 0;
}

void sort_string(char *str, size_t max_len, int (*crit)(char, char)) {
    for (size_t i = 0; i < max_len && str[i] != 0; i++) {
        for (size_t j = i + 1; j < max_len && str[j] != 0; j++) {
            if (crit(str[i], str[j]) != 1) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}*/

/*#include <stdio.h>  //6.5.7 Указатели на функцию. Функция как параметр (callback)

int sum_big2(int a, int b, int c, int d);

int main() {
    int number[4];
    int x;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &x);
        number[i] = x;
    }
    printf("%d", sum_big2(number[0], number[1], number[2], number[3]));
    return 0;
}

int sum_big2(int a, int b, int c, int d) {
    char num[4] = {a, b, c, d};
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    return num[0] + num[1];
}*/

/*#include <stdio.h>  //6.6.1 Стековый фрейм. Автоматические переменные
#include <stdlib.h>
#include <time.h>

double norm(int a, int b);

int main() {
    int a = -2, b = 10;
    double y = norm(a, b);
    return 0;
}

double norm(int a, int b) {
    double n = 100.;
    srand(time(NULL));
    double x_i = rand() % (b - a + 1) + a;
    return (1 / n) * (x_i * n);
}*/

/*#include <stdio.h>  //6.6.2 Стековый фрейм. Автоматические переменные
#include <stdlib.h>
#include <time.h>
#include <math.h>

double norm(int a, int b);
double reley(double x1, double x2);

int main() {
    double y = reley(norm(0, 5), norm(0, 5));
    return 0;
}

double norm(int a, int b) {
    double n = 100.;
    srand(time(NULL));
    double x_i = rand() % (b - a + 1) + a;
    return (1 / n) * (x_i * n);
}

double reley(double x1, double x2) {
    return sqrt(pow(x1, 2) + pow(x2, 2));
}*/

/*#include <stdio.h>  //6.6.3 Стековый фрейм. Автоматические переменные
#define MAX_SIZE 20

void reverse(short *ar, int count);

int main() {
    short digs[MAX_SIZE];
    int count = 0;
    while (count < MAX_SIZE && scanf("%hd", &digs[count]) == 1) count++;
    reverse(digs, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", digs[i]);
    }
    return 0;
}

void reverse(short *ar, int count) {
    for (int i = 0, j = count - 1; i < count / 2; i++, j--) {
        short temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}*/

/*#include <stdio.h>  //6.6.4 Стековый фрейм. Автоматические переменные
#include <string.h>

void strip_str(char *str, char *ptr_symbol);

int main() {
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
    char *ptr_str2 = str2;
    strcpy(ptr_str2, ".,-!?");
    strip_str(str, str2);
    puts(str);
    return 0;
}

void strip_str(char *str, char *ptr_symbol) {
    char *ptr = strpbrk(str, ptr_symbol);
    while (ptr != NULL) {
        for (; *ptr != '\0'; ptr++) {
            *ptr = *(ptr + 1);
        }
        ptr = strpbrk(str, ptr_symbol);
    }
}*/

/*#include <stdio.h>  //6.7.1 Рекурсивные функции
#define MAX_RECURSION 4

void recursive(int a);

int main() {
    recursive(1);
    return 0;
}

void recursive(int a) {
    if (MAX_RECURSION > a) recursive(a + 1);
    printf("%d ", a);
}*/

/*#include <stdio.h>  //6.7.2 Рекурсивные функции
#define MAX_LENGTH 20

size_t range_to_ar(int* ptr_a, size_t max_len, int from, int to, size_t count);

int main() {
    int max_rec;
    int ar[MAX_LENGTH];
    scanf("%d", &max_rec);

    size_t cnt = range_to_ar(ar, MAX_LENGTH, 1, max_rec, 0);
    for (size_t i = 0; i < cnt; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}

size_t range_to_ar(int* ptr_a, size_t max_len, int from, int to, size_t count) {
    if (count >= max_len || from > to) return count;
    *ptr_a = from;
    return range_to_ar(++ptr_a, max_len, from + 1, to, count + 1);
}*/

/*#include <stdio.h>  //6.7.3 Рекурсивные функции
#define MAX_LENGTH 20

int sum_ar(const short* ar, size_t len, size_t indx);

int main() {
    short ar[MAX_LENGTH];
    int count = 0;
    while (count < MAX_LENGTH && scanf("%hd", &ar[count]) != EOF) count++;
    int res = sum_ar(ar, count, 0);
    printf("%d", res);
    return 0;
}

int sum_ar(const short* ar, size_t len, size_t indx) {
    int sum = 0;
    if (indx < len) sum = sum_ar(ar, len, indx + 1);
    sum += ar[indx];
    return sum;
}*/

/*#include <stdio.h>  //6.7.3 Рекурсивные функции
#define MAX_LENGTH 20

size_t to_flat(short* v, size_t max_len_v, short* table[], size_t len, size_t count_v, size_t indx_t,
               size_t indx)

{
    if (count_v >= max_len_v || indx_t >= len) {
        return count_v;
    }
    if (table[indx_t][indx] != 0) {
        v[count_v++] = table[indx_t][indx];
    } else {
        return to_flat(v, max_len_v, table, len, count_v, indx_t + 1, 0);
    }
    return to_flat(v, max_len_v, table, len, count_v, indx_t, indx + 1);
}

int main() {
    short ar_1[] = {-4, 2, 3, 7, 0};
    short ar_2[] = {11, 6, 10, 8, 13, 98, -5, 0};
    short ar_3[] = {-47, 0};
    short ar_4[] = {8, 11, 56, -3, -2, 0};

    short* table[] = {ar_1, ar_4, ar_3, ar_2};

    short flat[MAX_LENGTH];

    size_t cnt = to_flat(flat, MAX_LENGTH, table, sizeof(table) / sizeof(*table), 0, 0, 0);

    for (size_t i = 0; i < cnt; ++i) printf("%d ", flat[i]);

    return 0;
}*/

/*#include <ctype.h>  //6.7.4 Рекурсивные функции
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encoding(char *str, char *res, char *symbols, const char *morze[]);

int main() {
    char str[100] = {0};
    char res[500];
    char symbols[] = "AJS2BKT3CLU4DMV5ENW6FOX7GPY8HQZ9IR10 ";
    const char *morze[] = {".-",   ".---", "...",   "..---", "-...", "-.-",  "-",    "...--",
                           "-.-.", ".-..", "..-",   "....-", "-..",  "--",   "...-", ".....",
                           ".",    "-.",   ".--",   "-....", "..-.", "---",  "-..-", "--...",
                           "--.",  ".--.", "-.--",  "---..", "....", "--.-", "--..", "----.",
                           "..",   ".-.",  ".----", "-----", "-...-"};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    encoding(str, res, symbols, morze);
    puts(res);
    return 0;
}

void encoding(char *str, char *res, char *symbols, const char *morze[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (str[i] == ' ') {
            strcat(res, "-...-");
        } else {
            int index = strchr(symbols, toupper(c)) - symbols;
            strcat(res, morze[index]);
        }
        strcat(res, " ");
    }
}*/

/*#include <stdio.h>  //6.7.5 Рекурсивные функции
#include <stdlib.h>
#include <string.h>

#define MORZE_LENGTH 37

void encoding(char *str, char *res, char *symbols, const char *morze[]);

int main() {
    char str[100] = {0};
    char res[500];
    char symbols[MORZE_LENGTH] = {'A', 'J', 'S', '2', 'B', 'K', 'T', '3', 'C', 'L', 'U', '4', 'D',
                                  'M', 'V', '5', 'E', 'N', 'W', '6', 'F', 'O', 'X', '7', 'G', 'P',
                                  'Y', '8', 'H', 'Q', 'Z', '9', 'I', 'R', '1', '0', ' '};
    const char *morze[MORZE_LENGTH] = {".-",   ".---", "...",   "..---", "-...", "-.-",  "-",    "...--",
                                       "-.-.", ".-..", "..-",   "....-", "-..",  "--",   "...-", ".....",
                                       ".",    "-.",   ".--",   "-....", "..-.", "---",  "-..-", "--...",
                                       "--.",  ".--.", "-.--",  "---..", "....", "--.-", "--..", "----.",
                                       "..",   ".-.",  ".----", "-----", "-...-"};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    encoding(str, res, symbols, morze);
    puts(res);
    return 0;
}

void encoding(char *str, char *res, char *symbols, const char *morze[]) {
    char *token = strtok(str, " ");
    while (token != NULL) {
        for (int i = 0; i < MORZE_LENGTH; i++) {
            char temp[10];
            strcpy(temp, morze[i]);
            if (strcmp(temp, token) == 0) {
                char temp_2[2] = {symbols[i], '\0'};
                strcat(res, temp_2);
                break;
            }
        }
        token = strtok(NULL, " ");
    }
}*/

/*#include <stdarg.h>  //6.8.1 Функции с произвольным числом параметров
#include <stdio.h>

double mean(int total, ...) {
    int sum = 0;
    double res = 0;
    va_list arg;
    va_start(arg, total);
    for (int i = 0; i < total; i++) {
        sum += va_arg(arg, int);
    }
    va_end(arg);
    res = (double)sum / total;
    return res;
}

int main() {
    double res = mean(7, 5, -10, 11, 0, 12, 4, 2);
    printf("%.2lf", res);
    return 0;
}*/

/*#include <math.h>  //6.8.2 Функции с произвольным числом параметров
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

double v_norm2(char *str, ...) {
    double res = 0.0;
    int count = 0;
    if (strcmp(str, "vector2") == 0) {
        count = 2;
    } else if (strcmp(str, "vector3") == 0) {
        count = 3;
    } else if (strcmp(str, "vector4") == 0) {
        count = 4;
    } else {
        return 0.0;
    }
    va_list arg;
    va_start(arg, str);

    for (int i = 0; i < count; i++) {
        res += pow(va_arg(arg, double), 2);
    }
    va_end(arg);
    return res;
}

int main() {
    double res = v_norm2("vector2", 1.0, 2.0);
    printf("%.1lf", res);
    return 0;
}*/

/*#include <stdarg.h>  //6.8.3 Функции с произвольным числом параметров
#include <stdio.h>

double sumf(const char* format, ...);

int main() {
    double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    printf("%.2f ", res);

    return 0;
}

double sumf(const char* format, ...) {
    double sum = 0.0;
    int count = 0;
    const char* ptr_symbol = format;
    va_list arg;
    va_start(arg, format);
    while (*ptr_symbol != '\0') {
        if (*ptr_symbol != '+') {
            va_arg(arg, double);
            ptr_symbol++;
            continue;
        } else {
            count++;
            for (int i = 0; i < count; i++) {
                sum += va_arg(arg, double);
                count--;
            }
            ptr_symbol++;
        }
    }
    va_end(arg);
    return sum;
}*/

/*#include <stdarg.h>  //6.8.4 Функции с произвольным числом параметров
#include <stdio.h>

void ar_fill(double *str, size_t count, ...);

int main() {
    double weights[10] = {0};
    ar_fill(weights, 5, 0.1, 0.2, 0.3, 0.4, 0.5);
    return 0;
}

void ar_fill(double *str, size_t count, ...) {
    va_list arg;
    va_start(arg, count);
    for (size_t i = 0; i < count; i++) {
        str[i] = va_arg(arg, double);
    }
    va_end(arg);
}*/

/*#include <stdarg.h>  //6.8.5 Функции с произвольным числом параметров
#include <stdio.h>

void ar_scan(double *str, size_t n, ...);

int main() {
    double weights[40] = {1.25, 4.34, -5.43, 0.01, -0.8};
    double w1, w2, w3;
    ar_scan(weights, 3, &w1, &w2, &w3);

    printf("%.2f %.2f %.2f", w1, w2, w3);

    return 0;
}

void ar_scan(double *str, size_t n, ...) {
    va_list arg;
    va_start(arg, n);
    for (size_t i = 0; i < n; i++) {
        double *ptr_number = va_arg(arg, double *);
        *ptr_number = str[i];
    }
    va_end(arg);
}*/

/*#include <stdio.h>  //6.8.6 Функции с произвольным числом параметров
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 20

int get_data_csv(double *arr, int length, char *str);

int main() {
    char str[100] = {0};
    double arr[MAX_SIZE] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    for (int i = 0; i < get_data_csv(arr, MAX_SIZE, str); i++) {
        printf("%.2lf ", arr[i]);
    }
    return 0;
}

int get_data_csv(double *arr, int length, char *str) {
    int count = 0;
    char *ptr_number = strchr(str, ' ');
    while (ptr_number != NULL) {
        if (ptr_number != NULL && count < length) {
            arr[count++] = atof(ptr_number);
            ptr_number = strchr(ptr_number + 1, ' ');
        } else {
            break;
        }
    }
    return count;
}*/

/*#include <stdio.h>  //7.1.1 Локальные и глобальные переменные

int is_positive(int num) {
    if (num >= 0)
        return 1;
    else
        return 0;
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if (is_positive(x)) printf("%d ", x);
    }

    return 0;
}*/

/*#include <stdio.h>  //7.1.2 Локальные и глобальные переменные

int is_positive(int num);
double mean_ar(const int *ar, size_t len_ar, int (*ptr_func)(int));

int main() {
    int marks[20] = {0};
    int x;
    int i = 0;
    size_t len_ar = sizeof(marks) / sizeof(marks[0]);
    while (scanf("%d", &x) == 1) {
        marks[i++] = x;
    }

    printf("%.1lf", mean_ar(marks, len_ar, is_positive));
    return 0;
}

double mean_ar(const int *ar, size_t len_ar, int (*ptr_func)(int)) {
    double sum = 0.0;
    int count = 0;
    for (size_t i = 0; i < len_ar; i++) {
        if (ptr_func(ar[i])) {
            sum += ar[i];
            count++;
        }
    }
    return sum / count;
}

int is_positive(int num) {
    if (num >= 1 && num <= 5)
        return 1;
    else
        return 0;
}*/

/*#include <stdio.h>  //7.2.1 Локальные и глобальные переменные

int main() {
    int number = 0;
    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 0;
    }
    for (int divider = 1; divider <= number; divider++) {
        if (number % divider == 0) printf("%d ", divider);
    }
    return 0;
}*/

/*#include <stdio.h>  //7.2.2 Локальные и глобальные переменные

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

/*#include <stdio.h>  //7.2.3 Локальные и глобальные переменные

int main() {
    int n, m;
    int sum = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i <= n; i++) {
        int flag;
        for (int j = 0; j <= m; j++) {
            flag = i + j;
            if ((flag) >= 20)
                break;
            else
                sum += (flag);
        }
        if ((flag) >= 20) break;
    }
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //7.3.1 Ключевые слова static и extern
#define START 5

int range() {
    static int start = 5;
    start += 3;
    return start;
}

int main() {
    int first = START;
    printf("%d ", first);
    printf("%d ", range());
    printf("%d ", range());
    printf("%d ", range());
    printf("%d ", range());
    printf("%d ", range());
    printf("%d", range());
    return 0;
}*/

/*#include <stdio.h>  //7.3.2 Ключевые слова static и extern

int range(int start, int stop, int step);

int main() {
    int start, stop, step;
    scanf("%d %d %d", &start, &stop, &step);

    for (int i = 0; i < 20; ++i) printf("%d ", range(start, stop, step));

    return 0;
}

int range(int start, int stop, int step) {
    static int current;
    if (current == 0) {
        current = start;
    }
    if (current > stop) {
        current = start;
    }
    int result = current;
    current += step;
    return result;
}*/

/*#include <stdio.h>  // 7.4.1 Функции malloc(), free(), calloc(), realloc(), memcpy()

#include <stdlib.h>

int main() {
    short *data = malloc(sizeof(short) * 4);
    data[0] = -4;
    data[1] = 3;
    data[2] = 0;
    data[3] = 100;
    free(data);
    return 0;
}*/

/*#include <stdio.h>  // 7.4.2 Функции malloc(), free(), calloc(), realloc(), memcpy()
#include <stdlib.h>

#define MAX 20

int main() {
    double digits[MAX] = {0};
    double num = 0;
    int count = 0;
    while (scanf("%lf", &num) == 1 && count < MAX) {
        digits[count] = num;
        count++;
    }
    double *ptr_d = malloc(sizeof(double) * count);
    for (int i = 0; i < count; i++) {
        ptr_d[i] = digits[i];
    }
    free(ptr_d);
    return 0;
}*/

/*#include <stdio.h>  // 7.4.3 Функции malloc(), free(), calloc(), realloc(), memcpy()
#include <stdlib.h>
#include <string.h>

#define MAX 20

int main() {
    int lengths[MAX];
    int count = 0;
    while ((scanf("%d", &lengths[count]) == 1) && count < MAX) {
        count++;
    }
    int *ptr_lens = calloc(MAX, sizeof(int));
    memcpy(ptr_lens, lengths, sizeof(int) * count);

    for (int i = 0; i < MAX; i++) {
        printf("%d ", ptr_lens[i]);
    }
    free(ptr_lens);
    return 0;
}*/

/*#include <stdio.h>  // 7.4.4 Функции malloc(), free(), calloc(), realloc(), memcpy()
#include <stdlib.h>

#define TOTAL 10

void* expand_array(short* ptr, size_t* len, short fill);

int main() {
    short* ptr_d = calloc(TOTAL, sizeof(short));
    size_t len = TOTAL;
    if (ptr_d == NULL) return 0;

    int count = 0;
    while (count < TOTAL && scanf("%hd", &ptr_d[count]) == 1) count++;
    short* ptr_temp = expand_array(ptr_d, &len, -1);
    ptr_d = ptr_temp;
    for (size_t i = 0; i < len; i++) {
        printf("%d ", ptr_d[i]);
    }
    free(ptr_d);
    return 0;
}

void* expand_array(short* ptr, size_t* len, short fill) {
    ptr = realloc(ptr, sizeof(short) * *len * 2);
    for (size_t i = *len; i < *len * 2; i++) {
        ptr[i] = fill;
    }
    *len = *len * 2;
    return ptr;
}*/

/*#include <stdio.h>  // 7.4.5 Функции malloc(), free(), calloc(), realloc(), memcpy()
#include <stdlib.h>
#include <string.h>

void get_ln(char* buffer, size_t max_len) {
    fgets(buffer, max_len - 1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
}

char* merge_string(const char* str1, const char* str2) {
    char* ptr_ar = malloc(sizeof(str2) + sizeof(str1) + 1);
    memcpy(ptr_ar, str1, strlen(str1));
    memcpy(ptr_ar + strlen(str1), str2, strlen(str2));
    return ptr_ar;
}

int main() {
    char str_1[200] = {0};
    char str_2[200] = {0};

    get_ln(str_1, sizeof(str_1));
    get_ln(str_2, sizeof(str_2));

    char* new_ptr = merge_string(str_1, str_2);
    puts(new_ptr);
    free(new_ptr);
    return 0;
}*/

/*#include <stdio.h>  //7.5.1 Перечисления (enum). Директива typedef

enum menu_item { item_exit = 1, item_c = 2, item_python = 3, item_java = 4 };

int main() {
    int flag;
    scanf("%d", &flag);
    enum menu_item key = flag;
    if (key == item_exit || key == item_c || key == item_python || key == item_java) {
        switch (key) {
            case item_exit:
                puts("Выход");
                break;
            case item_c:
                puts("Язык Си");
                break;
            case item_python:
                puts("Язык Python");
                break;
            case item_java:
                puts("Язык Java");
                break;
            default:
                break;
        }
    } else {
        puts("Не верный пункт меню");
    }
    return 0;
}*/

/*#include <stdio.h>  //7.5.2 Перечисления (enum). Директива typedef

enum calc_types { _perimetr = 1, _square = 2 };

double calc_rect(double width, double height, enum calc_types type);

int main() {
    int key;
    double w, h;
    scanf("%d%lf%lf", &key, &w, &h);
    enum calc_types first_key = key;
    printf("%.1lf", calc_rect(w, h, first_key));
    return 0;
}

double calc_rect(double width, double height, enum calc_types type) {
    double res = 0.;
    switch (type) {
        case _perimetr:
            res = 2 * (width + height);
            break;
        case _square:
            res = width * height;
            break;
        default:
            break;
    }
    return res;
}*/

/*#include <stdio.h>  //7.5.3 Перечисления (enum). Директива typedef

typedef enum { _do = 1, _re = 2, _mi = 3, _fa = 4, _sol = 5, _la = 6, _si = 7 } NOTES;

int get_major(NOTES a);

int main() {
    int a, b, c, d, f;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &f);
    if (get_major(a)) printf("%d ", a);
    if (get_major(b)) printf("%d ", b);
    if (get_major(c)) printf("%d ", c);
    if (get_major(d)) printf("%d ", d);
    if (get_major(f)) printf("%d ", f);
    return 0;
}

int get_major(NOTES a) {
    if (a == _do || a == _mi || a == _sol)
        return 1;
    else
        return 0;
}*/

/*#include <ctype.h>  //7.5.4 Перечисления (enum). Директива typedef
#include <stdio.h>
#include <string.h>

typedef int (*FUNC_CORRECT)(const char *);

int is_correct(const char *str);
int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter);

int main() {
    char input[300] = {0};
    char words[20][50] = {0};
    int count = 0;
    fgets(input, sizeof(input) - 1, stdin);
    char *ptr_n = strchr(input, '\n');
    if (ptr_n != NULL) {
        *ptr_n = '\0';
    }

    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = tolower(input[i]);
    }
    char *token = strtok(input, " ");
    while (token != NULL && count < 20) {
        strcat(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }
    FUNC_CORRECT func = is_correct;
    printf("%d", get_correct_words(words, count, func));
    return 0;
}

int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter) {
    int count = 0;
    for (int i = 0; i < count_words; i++) {
        if (filter(words[i])) count++;
    }
    return count;
}

int is_correct(const char *str) {
    char *ptr_search = strstr(str, "ra");
    if (ptr_search != NULL)
        return 1;
    else
        return 0;
}*/

/*#include <stdio.h>  //7.6.1 Структуры. Вложенные структуры

struct tag_vector {
    short x;
    short y;
    short z;
};

int main() {
    struct tag_vector vector;
    scanf("%hd%hd%hd", &vector.x, &vector.y, &vector.z);
    return 0;
}*/

/*#include <stdio.h>  //7.6.2, 3 Структуры. Вложенные структуры


struct tag_price {
    char name[100];
    unsigned int rubs;
    unsigned short kops;
    unsigned int foreign_key;
};


int main() {
    struct tag_price pr;
    pr = price_100;
    printf("%s %u %hu %u", pr.name, pr.rubs, pr.kops, pr.foreign_key);
    return 0;
}*/

/*#include <stdio.h>   //7.6.3 Структуры. Вложенные структуры
#include <string.h>

struct tag_fio {
    char firstname[50];
    char otch[50];
    char lastname[50];
};
struct tag_student {
    struct tag_fio fio;
    short old;
    short height;
    short weight;
};

void getline(char* buffer, size_t max_len) {
    fgets(buffer, max_len - 1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';
}

int main() {
    char fname[50], otch[50], lname[50];  // имя, отчество, фамилия
    short old, height, weight;            // возраст, высота, вес

    getline(fname, sizeof(fname));
    getline(otch, sizeof(otch));
    getline(lname, sizeof(lname));

    scanf("%hd, %hd, %hd", &old, &height, &weight);

    struct tag_student st = {.fio = {"", "", ""}, .old = old, .height = height, .weight = weight};

    strcpy(st.fio.firstname, fname);
    strcpy(st.fio.otch, otch);
    strcpy(st.fio.lastname, lname);
    return 0;
}*/

/*#include <stdio.h>  //7.6.4 Структуры. Вложенные структуры

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
};

int main() {
    struct tag_time tm1;
    struct tag_time tm2;
    scanf("%hhu%hhu%hhu%hhu%hhu%hhu", &tm1.hours, &tm1.minutes, &tm1.seconds, &tm2.hours, &tm2.minutes,
          &tm2.seconds);
    struct tag_time tm_sum;
    tm_sum.hours = tm1.hours + tm2.hours;
    tm_sum.minutes = tm1.minutes + tm2.minutes;
    tm_sum.seconds = tm1.seconds + tm2.seconds;

    if (tm_sum.seconds > 59) {
        tm_sum.seconds = tm_sum.seconds % 60;
        tm_sum.minutes += 1;
    }
    if (tm_sum.minutes > 59) {
        tm_sum.minutes = tm_sum.minutes % 60;
        tm_sum.hours += 1;
    }
    if (tm_sum.hours > 24) {
        tm_sum.hours = tm_sum.hours % 24;
    }
    printf("%02d:%02d:%02d", tm_sum.hours, tm_sum.minutes, tm_sum.seconds);
    return 0;
}*/

/*#include <stdio.h>  //7.6.5 Структуры. Вложенные структуры

enum { total_points = 100 };

struct tag_point_3d {
    int x;
    int y;
    int z;
};

int main() {
    struct tag_point_3d points[total_points];
    int total = 0;
    int i = 0;
    for (; i < total_points; i++) {
        if (scanf("%d%d%d", &points[i].x, &points[i].y, &points[i].z) == 3) {
            total += 3;
        } else {
            i--;
            break;
        }
    }
    printf("%d %d %d", points[i].x, points[i].y, points[i].z);

    return 0;
}*/

/*#include <stdio.h>  //7.7.1 Указатели на структуры. Передача структур в функции

struct tag_geom {
    char type;
    int x0, y0;
    int x1, y1;
};

int main() {
    struct tag_geom geom = {.type = 1, .x0 = 10, .y0 = 20, .x1 = 50, .y1 = 30};
    struct tag_geom* ptr_geom = &geom;
    printf("%d %d %d %d %d", ptr_geom->type, ptr_geom->x0, ptr_geom->y0, ptr_geom->x1, ptr_geom->y1);
    return 0;
}*/

/*#include <stdio.h>  //7.7.2 Указатели на структуры. Передача структур в функции
#include <stdlib.h>

struct tag_rub {
    double ratio_usd;
    int rubs;
};

int main() {
    struct tag_rub* account_r = malloc(sizeof(struct tag_rub));
    account_r->ratio_usd = 91.32;
    scanf("%d", &account_r->rubs);
    printf("%.2lf", account_r->rubs / account_r->ratio_usd);
    free(account_r);
    return 0;
}*/

/*#include <stdio.h>  //7.7.3 Указатели на структуры. Передача структур в функции

typedef struct {
    double re;  // действительная часть
    double im;  // мнимая часть
} COMPLEX;

COMPLEX complex_sum(COMPLEX, COMPLEX);

int main() {
    COMPLEX cmp_1;
    COMPLEX cmp_2;
    scanf("%lf%lf%lf%lf", &cmp_1.re, &cmp_1.im, &cmp_2.re, &cmp_2.im);
    COMPLEX res = complex_sum(cmp_1, cmp_2);
    return 0;
}

COMPLEX complex_sum(COMPLEX a, COMPLEX b) {
    COMPLEX res = {a.re + b.re, a.im + b.im};
    return res;
}*/

/*#include <stdio.h>  //7.7.4 Указатели на структуры. Передача структур в функции
#include <stdlib.h>

typedef struct tag_point {
    int x;
    int y;
} POINT;

int rect_square(POINT* a, POINT* b);

int main() {
    POINT* a = malloc(sizeof(POINT));
    POINT* b = malloc(sizeof(POINT));
    scanf("%d%d%d%d", &a->x, &a->y, &b->x, &b->y);
    printf("%d", rect_square(a, b));
    free(a);
    free(b);
    return 0;
}

int rect_square(POINT* a, POINT* b) { return (b->x - a->x) * (b->y - a->y); }*/

/*#include <stdio.h>  //7.7.5 Указатели на структуры. Передача структур в функции
#define MAX_SIZE 20

typedef struct tag {
    int x;
    int y;
} POINT;

typedef struct tag_2 {
    double mean_x;
    double mean_y;
} DATA;

DATA get_means(POINT* arr, int size);

int main() {
    POINT points[MAX_SIZE] = {0};
    int length = 0;
    while (scanf("%d%d", &points[length].x, &points[length].y) == 2 && length < MAX_SIZE) {
        length++;
    }
    DATA result = get_means(points, length);
    printf("%.2lf %.2lf", result.mean_x, result.mean_y);
    return 0;
}

DATA get_means(POINT* arr, int size) {
    DATA res;
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int i = 0; i <= size; i++) {
        sum_x += arr[i].x;
        sum_y += arr[i].y;
    }
    res.mean_x = sum_x / size;
    res.mean_y = sum_y / size;
    return res;
}*/

/*#include <stdarg.h>  //7.7.6 Указатели на структуры. Передача структур в функции
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char fname[MAX_SIZE];
    char old;
    char stag;
    int salary;
    double efs;
} PERSON;

void fill_data(PERSON *ptr, char format_str[], ...);

int main() {
    PERSON first;
    fill_data(&first, "#o #e #s #f", 35, 3.5, 36000, "Maxim Polyakov");
    return 0;
}

void fill_data(PERSON *ptr, char format_str[], ...) {
    va_list arg;
    va_start(arg, format_str);
    char *ptr_symbol = strchr(format_str, '#');
    while (ptr_symbol != NULL) {
        if (ptr_symbol != NULL && *(ptr_symbol + 1) == 'f') {
            strcpy(ptr->fname, va_arg(arg, char *));
            ptr_symbol = strchr(ptr_symbol + 1, '#');
        }
        if (ptr_symbol != NULL && *(ptr_symbol + 1) == 'o') {
            ptr->old = (char)va_arg(arg, int);
            ptr_symbol = strchr(ptr_symbol + 1, '#');
        }
        if (ptr_symbol != NULL && *(ptr_symbol + 1) == 'g') {
            ptr->stag = (char)va_arg(arg, int);
            ptr_symbol = strchr(ptr_symbol + 1, '#');
        }
        if (ptr_symbol != NULL && *(ptr_symbol + 1) == 's') {
            ptr->salary = va_arg(arg, int);
            ptr_symbol = strchr(ptr_symbol + 1, '#');
        }
        if (ptr_symbol != NULL && *(ptr_symbol + 1) == 'e') {
            ptr->efs = va_arg(arg, double);
            ptr_symbol = strchr(ptr_symbol + 1, '#');
        }
    }
    va_end(arg);
}*/

/*#include <stdio.h>  //7.8.1 Реализация стека (пример использования структур)
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

typedef struct tag_obj {
    char url[MAX_SIZE];
    struct tag_obj* next;
} OBJ;

OBJ* push(OBJ* top, const char* url);
OBJ* pop(OBJ* top);

int main() {
    OBJ* top = NULL;
    top = push(top, "https://proproprogs.ru/c_base/c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty");
    top = push(top, "https://proproprogs.ru/c_base/c_struktura-i-ponimanie-raboty-programmy-hello-world");
    top = push(top,
               "https://proproprogs.ru/c_base/"
               "c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya");
    top = push(top, "https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye");
    top = push(top, "https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef");
    while (top != NULL) {
        top = pop(top);
    }
    return 0;
}

OBJ* push(OBJ* top, const char* url) {
    OBJ* ptr = malloc(sizeof(OBJ));
    strcpy(ptr->url, url);
    ptr->next = top;
    return ptr;
}

OBJ* pop(OBJ* top) {
    if (top == NULL) return top;
    OBJ* ptr_next = top->next;
    free(top);
    return ptr_next;
}*/

/*#include <stdarg.h>  //7.8.2 Реализация стека (пример использования структур)
#include <stdio.h>

enum { name_length = 50, total_links = 50, max_path_station = 100 };

typedef struct tag_station {
    char name[name_length];
    struct tag_station* links[total_links];
    short count_links;
    char fl_reserved;
} STATION;

void set_station_links(STATION* st, int count_links, ...) {
    STATION* current = st;
    va_list arg;
    va_start(arg, count_links);
    for (int i = 0; i < count_links; i++) {
        current->links[i] = va_arg(arg, STATION*);
    }
    current->count_links = count_links;
    va_end(arg);
}

int main() {
    STATION st[10] = {
        {"St #1", .count_links = 0, .fl_reserved = 0}, {"St #2", .count_links = 0, .fl_reserved = 0},
        {"St #3", .count_links = 0, .fl_reserved = 0}, {"St #4", .count_links = 0, .fl_reserved = 0},
        {"St #5", .count_links = 0, .fl_reserved = 0}, {"St #6", .count_links = 0, .fl_reserved = 0},
        {"St #7", .count_links = 0, .fl_reserved = 0}, {"St #8", .count_links = 0, .fl_reserved = 0},
        {"St #9", .count_links = 0, .fl_reserved = 0}, {"St #10", .count_links = 0, .fl_reserved = 0},
    };

    set_station_links(&st[0], 2, &st[1], &st[2]);
    set_station_links(&st[1], 3, &st[0], &st[3], &st[4]);
    set_station_links(&st[2], 2, &st[0], &st[5]);
    set_station_links(&st[3], 2, &st[1], &st[5]);
    set_station_links(&st[4], 2, &st[1], &st[7]);
    set_station_links(&st[5], 4, &st[2], &st[3], &st[6], &st[8]);
    set_station_links(&st[6], 2, &st[5], &st[8]);
    set_station_links(&st[7], 2, &st[4], &st[8]);
    set_station_links(&st[8], 4, &st[5], &st[6], &st[7], &st[9]);
    set_station_links(&st[9], 1, &st[8]);
    return 0;
}*/

/*#include <stdarg.h>  //7.8.3 Реализация стека (пример использования структур) не сделал ДОДЕЛАТЬ BFC
#include <stdio.h>

enum { name_length = 50, total_links = 50, max_path_station = 100 };

typedef struct tag_station {
    char name[name_length];
    struct tag_station* links[total_links];
    short count_links;
    char fl_reserved;
} STATION;

void set_station_links(STATION* st, int count_links, ...) {
    STATION* current = st;
    va_list arg;
    va_start(arg, count_links);
    for (int i = 0; i < count_links; i++) {
        current->links[i] = va_arg(arg, STATION*);
    }
    current->count_links = count_links;
    va_end(arg);
}

void find_path(STATION* from, STATION* to, STATION *path[], int* count_st) {

}

int main() {
    STATION st[10] = {
        {"St #1", .count_links = 0, .fl_reserved = 0}, {"St #2", .count_links = 0, .fl_reserved = 0},
        {"St #3", .count_links = 0, .fl_reserved = 0}, {"St #4", .count_links = 0, .fl_reserved = 0},
        {"St #5", .count_links = 0, .fl_reserved = 0}, {"St #6", .count_links = 0, .fl_reserved = 0},
        {"St #7", .count_links = 0, .fl_reserved = 0}, {"St #8", .count_links = 0, .fl_reserved = 0},
        {"St #9", .count_links = 0, .fl_reserved = 0}, {"St #10", .count_links = 0, .fl_reserved = 0},
    };
    STATION* path[max_path_station];
    int count_st = 0;

    set_station_links(&st[0], 2, &st[1], &st[2]);
    set_station_links(&st[1], 3, &st[0], &st[3], &st[4]);
    set_station_links(&st[2], 2, &st[0], &st[5]);
    set_station_links(&st[3], 2, &st[1], &st[5]);
    set_station_links(&st[4], 2, &st[1], &st[7]);
    set_station_links(&st[5], 4, &st[2], &st[3], &st[6], &st[8]);
    set_station_links(&st[6], 2, &st[5], &st[8]);
    set_station_links(&st[7], 2, &st[4], &st[8]);
    set_station_links(&st[8], 4, &st[5], &st[6], &st[7], &st[9]);
    set_station_links(&st[9], 1, &st[8]);



    //find_path(&st[0], &st[9], path, &count_st);

    return 0;
}*/

/*#include <stdio.h>  //7.9.1 Объединения (union). Битовые поля

typedef enum { coord_int = 1, coord_double = 2 } TYPE_COORD;

typedef union {
    int coord_i;
    double coord_d;
} COORD;

typedef struct {
    COORD x;
    COORD y;
    TYPE_COORD type;
} POINT2;

int main() {
    POINT2 pt;
    scanf("%u", &pt.type);
    if (pt.type == coord_int) {
        scanf("%d%d", &pt.x.coord_i, &pt.y.coord_i);
    } else {
        scanf("%lf%lf", &pt.x.coord_d, &pt.y.coord_d);
    }
    return 0;
}*/

/*#include <stdio.h>  //7.9.2 Объединения (union). Битовые поля
#define SIZE 5

typedef enum { param_int = 1, param_double = 2 } TYPE_PARAM;

typedef union {
    int data_i;
    double data_d;
    int res_1;
    double res_2;
} DATA;

DATA sum_ar(DATA* arr, size_t count_arr, TYPE_PARAM a);

int main() {
    DATA arr_i[SIZE];
    DATA arr_d[SIZE];
    int num = 1;
    double num_2 = 1.1;
    for (int i = 0; i < SIZE; i++) {
        arr_i[i].data_i = num;
        num += 1;
    }
    for (int i = 0; i < SIZE; i++) {
        arr_d[i].data_d = num_2;
        num_2 += 1.1;
    }
    DATA result_i = sum_ar(arr_i, SIZE, 1);
    DATA result_d = sum_ar(arr_d, SIZE, 2);
    return 0;
}

DATA sum_ar(DATA* arr, size_t count_arr, TYPE_PARAM a) {
    DATA result;
    if (a == param_int) {
        result.res_1 = 0;
        for (size_t i = 0; i < count_arr; i++) {
            result.res_1 += arr[i].data_i;
        }
    } else {
        result.res_2 = 0.0;
        for (size_t i = 0; i < count_arr; i++) {
            result.res_2 += arr[i].data_d;
        }
    }
    return result;
}*/

/*#include <stdio.h>  //7.9.3 Объединения (union). Битовые поля

typedef struct {
    unsigned old : 7;
    unsigned salary : 20;
    unsigned height : 8;
    unsigned weight : 7;
} PERSON_DATA;

int main() {
    PERSON_DATA pd;
    pd.old = 45;
    pd.salary = 876043;
    pd.height = 186;
    pd.weight = 83;
    printf("%ld", sizeof(pd));
    return 0;
}*/

/*#include <stdio.h>  //8.1.1 Файловые функции: fopen(), fclose(), fgetc(), fputc()

int main() {
    FILE* fl = fopen("test.dat", "r");
    if (fl == NULL) return 2;
    fclose(fl);
    return 0;
}*/

/*#include <stdio.h>  //8.2.1 Функции perror(), fseek() и ftell()

int main() {
    char byte;
    FILE* fp = stdin;

    int pos = ftell(fp);
    while ((byte = fgetc(fp)) != EOF) {
        printf("%d:%d ", byte, pos);
    }
    return 0;
}*/

/*#include <stdio.h>  //8.3.1 Функции perror(), fseek() и ftell()
#include <string.h>

int main() {
    char buff[512];

    FILE* fp = stdin;
    fgets(buff, sizeof(buff), fp);
    char* ptr_tok = strtok(buff, " ");
    int count = 0;
    while (ptr_tok != NULL) {
        count++;
        ptr_tok = strtok(NULL, " ");
    }
    printf("%d", count);

    return 0;
}*/

/*#include <stdio.h>  //8.3.2 Функции perror(), fseek() и ftell()
#include <string.h>

int main() {
    char buff[512];
    int w, h;
    scanf("%d%d", &w, &h);
    FILE* fp = stdout;
    sprintf(buff, "rectangle: %d; %d", w, h);
    fputs(buff, fp);
    return 0;
}*/

/*#include <stdio.h>  //8.3.3 Функции fputs(), fgets() и fprintf(), fscanf()

enum { max_length_ar = 20 };

int main() {
    double temp[max_length_ar] = {0};

    FILE* fp = stdin;
    int count = 0;
    while ((fscanf(fp, "%lf", &temp[count])) == 1 && count < max_length_ar) {
        count++;
    }
    for (int i = 0; i < count; i++) {
        if (temp[i] > 0) printf("%.2lf ", temp[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //8.3.4 Функции fputs(), fgets() и fprintf(), fscanf()

typedef struct {
    unsigned int id;
    unsigned int width, height, depth;
    double weight;
} BOX;

int main() {
    BOX one;
    FILE* fp = stdout;
    scanf("%u; %u; %u; %u; %lf", &one.id, &one.width, &one.height, &one.depth, &one.weight);
    fprintf(fp, "box %u: %u x %u x %u", one.id, one.width, one.height, one.depth);
    return 0;
}*/

/*#include <stdio.h>  //8.4.1 Функции feof(), fflush(), setvbuf()
#include <string.h>

enum { max_lines = 10, max_string_len = 200 };

int main() {
    char text[max_lines][max_string_len] = {0};
    int count = 0;
    FILE* fp = stdin;
    while (!feof(fp) && count < max_lines) {
        for (int i = 0; i < max_lines && fgets(text[i], max_string_len, fp) != NULL; i++) {
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        char* n = strchr(text[i], '\n');
        if (n != NULL) *n = '\0';
        puts(text[i]);
    }
    return 0;
}*/

/*#include <stdio.h>  //8.5.1 Бинарный режим доступа. Функции fwrite() и fread()

int main() {
    short data[] = {79 + 256*80, 81 + 256*82, 83 + 256*84, 85 + 256*86};
    FILE* fp = stdout;
    fwrite(data, sizeof(*data), sizeof(data) / sizeof(*data), fp);
    return 0;
}*/

/*#include <stdio.h>  //8.5.2 Бинарный режим доступа. Функции fwrite() и fread()

int main() {
    short data[10] = {0};
    FILE* fp = stdin;
    int res = fread(data, sizeof(*data), sizeof(data)/sizeof(*data), fp);
    for (int i = 0; i < res; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}*/

#include <stdio.h>

int main() {
    int n = 0;
    int col_star = 1;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        int col_space = i - 1;
        for (int j = 0; j < col_space; j++) {
            printf(" ");
        }
        for (int k = 0; k < col_star; k++) {
            printf("*");
        }
        col_star += 2;
        printf("\n");
    }
    return 0;
}