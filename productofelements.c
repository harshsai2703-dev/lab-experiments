//find product of all elements of an array 
#include<stdio.h>
int main()
{
    int i,n,prod=1;
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
        prod=prod*arr[i];
    }
    printf("Product= %d",prod);
    return 0;
}