#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *pi = a;
    float *pf = b;
    char *pc = c;

    printf("Initial Addresses and Values:\n");
    printf("pi = %p, *pi = %d\n", pi, *pi);
    printf("pf = %p, *pf = %.1f\n", pf, *pf);
    printf("pc = %p, *pc = %c\n\n", pc, *pc);

    pi++;
    pf++;
    pc++;

    printf("After Increment:\n");
    printf("pi = %p, *pi = %d\n", pi, *pi);
    printf("pf = %p, *pf = %.1f\n", pf, *pf);
    printf("pc = %p, *pc = %c\n\n", pc, *pc);

    pi--;
    pf--;
    pc--;

    printf("After Decrement (Back to Original):\n");
    printf("pi = %p, *pi = %d\n", pi, *pi);
    printf("pf = %p, *pf = %.1f\n", pf, *pf);
    printf("pc = %p, *pc = %c\n", pc, *pc);

    return 0;
}