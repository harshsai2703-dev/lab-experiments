//Read integers into an array and count how many are positive, negative, odd, and even.

#include<stdio.h>
int main()
{
    int arr[10];
    int odd=0 , even =0 , pos=0 , neg=0;
    for(int i=0;i<10;i++)
    {
        printf("ELEMENT NO. %d: ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("No. of even elements: %d\n",even);
    printf("No. of odd elements: %d\n",odd);
    printf("No. of positive elements: %d\n",pos);
    printf("No. of negative elements: %d\n",neg);
    return 0;
    
}