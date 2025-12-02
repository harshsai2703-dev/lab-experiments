#include<stdio.h>

void sum(int a, int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);
    return;
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    sum(n1,n2);
    return 0;

}