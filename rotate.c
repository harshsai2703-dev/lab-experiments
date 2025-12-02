//wap to rotate an array by k steps
#include<stdio.h>
int main()
{
    int n,i,j,temp,k;
    printf("Enter value of k:");
    scanf("%d",&k);
    printf("SIZE OF ARRAY: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("ELEMENT AT INDEX %d: ",i);
        scanf("%d",&arr[i]);
    }  
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(i=0;i<n/2;i++){
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    }
    for(i=0;i<k/2;i++){
        temp=arr[i];
        arr[i]=arr[k-1-i];+
        arr[k-1-i]=temp;
    }
    for(i=k,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}