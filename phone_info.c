/*Write a C program that collects and displays the following details about a mobile phone:
o	Brand Name (single word)
o	Model Name (single word)
o	Serial Number (integer)
o	Price (float)
o	Color (single word)
o	Battery Capacity (mAh) (integer)
*/
#include <stdio.h>

int main()
{
    char brand[50], model[50], color[50];
    int serialNumber, batteryCapacity;
    float price;
    printf("Enter Brand Name: ");
    scanf("%s", brand);

    printf("Enter Model Name: ");
    scanf("%s", model);

    printf("Enter Serial Number: ");
    scanf("%d", &serialNumber);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Color: ");
    scanf("%s", color);

    printf("Enter Battery Capacity (mAh): ");
    scanf("%d", &batteryCapacity);

    
    printf("\n---- Mobile Phone Details ----\n");
    printf("Brand Name: %s\n", brand);
    printf("Model Name: %s\n", model);
    printf("Serial Number: %d\n", serialNumber);
    printf("Price: %.2f\n", price);
    printf("Color: %s\n", color);
    printf("Battery Capacity: %d mAh\n", batteryCapacity);

    return 0;
}