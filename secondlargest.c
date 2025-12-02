//wap to print the second largest element of an array

#include<stdio.h>
int main()
{
    int i,n,max,secmax;
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
    secmax=arr[1];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(secmax<arr[i] && arr[i]<max)
        {
            secmax=arr[i];
        }
    }
    printf("\nSecond largest element: %d",secmax);
    return 0;
}
