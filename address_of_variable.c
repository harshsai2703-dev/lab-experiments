//Write a C program to declare a variable and print its memory address using the address-of operator (&).
#include<stdio.h>
int main()
{
    float x=3;
    printf("Adress of variable 'x' is:%d", &x);
    return 0;
}