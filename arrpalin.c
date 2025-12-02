//wap to check whether an array is palindrome or not 
#include<stdio.h>
int main()
{
    int n,i,palin;
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
        if(arr[i]=arr[n-1-i])
        {
           palin=1;
        }
    }
    if (palin==1)
    {
        printf("\nThe given array is palindrome.");
    }
    else
    {
    printf("\nThe given array is not palindrome.");
    }

    return 0;
    
}