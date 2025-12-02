//find the maximum element in the array

#include<stdio.h>
int main()
{
    int i,n,max;
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
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMaximum element= %d",max);
    return 0;
}