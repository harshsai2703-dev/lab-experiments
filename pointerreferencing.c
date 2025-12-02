#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.75;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a: %d\n", a);
    printf("Value of b: %.2f\n", b);
    printf("Value of c: %c\n\n", c);

    printf("Address of a (p1): %p\n", p1);
    printf("Address of b (p2): %p\n", p2);
    printf("Address of c (p3): %p\n\n", p3);

    printf("Value pointed by p1: %d\n", *p1);
    printf("Value pointed by p2: %.2f\n", *p2);
    printf("Value pointed by p3: %c\n", *p3);

    return 0;
}