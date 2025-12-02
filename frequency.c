//Find how many times a specific number appears in a given array

#include<stdio.h>
int main()
{
    int arr[10];
    int count=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        printf("ELEMENT NO. %d: ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]==n)
        {
            count++;
        }
    }
    printf("Frequency of the given number : %d",count);
    return 0;
    
}