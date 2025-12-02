//multiply odd indexed element by 2 and add 10 to the even ones
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
    for(i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    printf("\nNew array:\n");
     for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }


    
}