#include <stdio.h>

void test_char() {
    unsigned char c=0;
    c--;
    printf("%d\n", c);
    c = 'b';
    printf("%c has the code %d\n", c, c);

    // convert lowercase to uppercase via pure math
    c = c - 'a' + 'A';
    printf("%c\n", c);
    printf("sizeof character is %zu\n", sizeof(c));
    printf("sizeof character is %zu\n", sizeof('X'));
}
void test_int() {
    int num = 7, num2=-3;
    short sh=0;
    long lg=0;
    printf("num=%d, num2=%d, size=%zu\n", num, num2, sizeof(int));
    printf("short size=%zu, long size=%zu\n", sizeof(sh), sizeof(long));
    unsigned short x=0;
    x--;
    printf("max value for short = %u\n", x);
    unsigned int max_int=0;
    max_int--;
    printf("max int = %u\n", max_int);
}

void test_float() {
    float x = 3.2123455678;
    double y;
    printf("float size = %zu, double size = %zu\n", sizeof(float), sizeof(double));
    printf("x=%f\n", x);
    float z=1.2; // 10010000100110000
    float zz=123e-7;
    printf("%u", z);
}

void test_operators() {
    int a = 5, b = 2;
    double c;
    c = 1.0 * a / b;
    printf("a/b=%f\n", c);
    printf("%d\n", 9 % 5);
//    printf("%d\n", -9 % 5);
//    printf("%d\n", 9 % -5);
//    printf("%d\n", -9 % -5);
    int ex1 = 0120;
    int ex2 = 0xffff;
    printf("ex1=%d\n", ex1);
    printf("7 > 11 = %d\n", 7 > 11);
    printf("%d\n", (2 > 1) && 7);
    printf("7 & 3 = %d\n", 7&3);
    printf("7 | 3 = %d\n", 7|3);
    printf("!1= %d\n", ~1);
    printf("7>>2=%d\n", 7>>2);
    printf("7<<2=%d\n", 7<<2);
    int ex3 = 11;
    ex3 %= 3; // ex3 = 11 % 3
    printf("%d", ex3);

}

void test_if() {
    int a = 2;
    if (a > 0) {
        printf("A is greater than 0\n");
        printf("Because a > 0 I print this as well\n");
    } else if (a > 1) {
        printf("A is greater than 1\n");
    } else if (a > -10) {
        printf("A is greater than -10\n");
    } else {
        printf("A is not greater than 0\n");
    }
    printf("This always prints\n");
}

int main() {
//    printf("Hello, World!\n");
//    test_char();
//    test_int();
//    test_float();
//    test_operators();
    test_if();
    return 0;
}
