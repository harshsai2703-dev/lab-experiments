//wap to copy elements of one array to another array in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("No. of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element at index %d :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    int brr[n];
    for (i=0;i<n;i++)
    {
        brr[i]=arr[n-1-i];
    }
    printf("\nREVERSED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",brr[i]);
    }
    return 0;
    
}