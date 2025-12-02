#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date dob;
};

int main() {
    struct Employee e;

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Date of Birth: %02d/%02d/%d\n",
           e.dob.day, e.dob.month, e.dob.year);

    return 0;
}
