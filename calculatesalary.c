/*Write a function that calculates monthly salary including:
o	HRA (15% for metro cities, 10% for non-metro)
o	DA (5%)*/

#include <stdio.h>

float calculateSalary(float basic, int Metro)
{
    float hra, da, total;
    da = 0.05 * basic;

    if (Metro == 1)
        hra = 0.15 * basic;
    else
        hra = 0.10 * basic;

    total = basic + hra + da;
    return total;
}

int main()
{
    float basic, total;
    int cityType;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter city type (1 for Metro, 0 for Non-Metro): ");
    scanf("%d", &cityType);

    total = calculateSalary(basic, cityType);

    printf("\n----- Salary Breakdown -----\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", (cityType ? 0.15 * basic : 0.10 * basic));
    printf("DA (5%%)      : %.2f\n", 0.05 * basic);
    printf("-----------------------------\n");
    printf("Total Salary : %.2f\n", total);

    return 0;
}
