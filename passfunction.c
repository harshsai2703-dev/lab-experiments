#include <stdio.h>
void modify(int *x, float *y, char *z) 
{
    *x = *x + 10;
    *y = *y + 5.5;
    *z = 'Z';
}
int main() 
{
    int a = 10;
    float b = 2.5;
    char c = 'A';
    printf("Before Function Call:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    modify(&a, &b, &c);
    printf("After Function Call:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    return 0;
}