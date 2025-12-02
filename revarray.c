//WAP TO REVERSE AN ARRAY WITHOUT USING ANOTHER ARRAY
#include<stdio.h>
int main()
{
    int n,i,temp;
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
    printf("\n");
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("REVERSED ARRAY \n");
     for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}