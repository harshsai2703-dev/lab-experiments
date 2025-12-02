/*Write a C program that collects and displays the following details about a product:
o	Product Name (single word)
o	Product ID (integer)
o	Quantity (integer)
o	Price (float)
o	Manufacturer (single word)
o	Category (single word)*/

#include<stdio.h>
int main()
{
    char Name[50],Category[50],Manufacturer[50];
    int productid,Quantity;
    float Price;
    printf("Enter product name ->");
    scanf("%s",&Name);
    printf("Enter product id ->");
    scanf("%d",&productid);
    printf("Enter quatity ->");
    scanf("%d",&Quantity);
    printf("Enter price/unit ->");
    scanf("%f",&Price);
    printf("Enter the manufacturer ->");
    scanf("%s",&Manufacturer);
    printf("Enter category ->");
    scanf("%s",&Category);
    printf("__________________________________________________________________\n");
    printf("The product information is as follows\n");
    printf("PRODUCT NAME:%s\n",Name);
    printf("PRODUCT ID:%d\n",productid);
    printf("QUANTITY:%d\n",Quantity);
    printf("PRICE:%f\n",Price);
    printf("MANUFACTURER:%s\n",Manufacturer);
    printf("CATEGORY:%s\n",Category);
    printf("__________________________________________________________________\n");
    return 0;
}
