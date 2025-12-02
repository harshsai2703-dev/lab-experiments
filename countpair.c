//count the no. of pairs in an array whose sum is x
#include<stdio.h>
int main()
{
    int i,j,n,count=0,x;
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
    for(i=0;i<n;i++){
        if(i==n)
        {
            break;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                count++;
            }
        }
    }
    printf("\nNo. of pairs: %d",count);
}