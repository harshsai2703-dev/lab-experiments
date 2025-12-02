//find sum of all elements of an array 
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element of index %d :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum= %d",sum);
    return 0;
}