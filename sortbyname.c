#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char address[50];
    float salary;
};

int main() {
    struct Employee e[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Address: ");
        scanf("%s", e[i].address);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (strcmp(e[j].name, e[j + 1].name) > 0) {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    printf("\nEmployees in Alphabetical Order:\n");
    printf("Name\tAddress\tSalary\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%s\t%.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}