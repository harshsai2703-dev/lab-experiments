//Write a function that takes radius as input and returns the area of the circle.

#include<stdio.h>
#include<math.h>

float area(float r)
{
    float pi=3.14;
    float area=pi*pow(r,2);
    return (area);
}
int main()
{
    float Area,r;
    printf("Enter radius:");
    scanf("%f", &r);
    Area=area(r);
    printf("Area=%.2f",Area);
    return 0;
    
}