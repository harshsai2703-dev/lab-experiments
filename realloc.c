#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*4);
    if(arr==NULL)
    {
        printf("memory could'nt be allocated dynamically");
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of %d element:",i+1);
        scanf("%d",(arr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d",*(arr+i));
    }
    arr=(int*)realloc(arr,(n+5)*4);
    for(int i=n;i<n+5;i++)
    {
        printf("Enter the value of %d element:",i+1);
        scanf("%d",(arr+i));
    }
    for(int i=0;i<n+5;i++){
        printf("%d",*(arr+i));
    }
}