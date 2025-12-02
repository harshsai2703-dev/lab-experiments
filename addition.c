//Write a C program to input two numbers from the user and display their sum
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Num1= ");
    scanf("%d",&num1);
    printf("Num2= ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum of two numbers = %d",sum);
    return 0;
}