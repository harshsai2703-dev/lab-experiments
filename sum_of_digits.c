//Write a C program that takes an integer as input and prints the sum of its digits.
#include<stdio.h>
int main()
{
    int n,sum=0,rem,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits is : %d",sum);
    return 0;
}
