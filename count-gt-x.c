//count the number of elements in an array which are greater than x
#include<stdio.h>
int main()
{
    int i,n,count=0,x;
    printf("Enter value of x:");
    scanf("%d",&x);
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
    for(i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    printf("\nNo. of elements greater than x = %d",count);
    return 0;
}