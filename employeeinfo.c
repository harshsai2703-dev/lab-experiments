//Create a program that allows entry and display of employee details (name, ID, department, salary) using functions

#include<stdio.h>

void info(char name[50],int id,char dep[50],float salary)
{
    printf("-------------------------------\n");
    printf("EMPLOYEE NAME: %s\n",name);
    printf("EMPLOYEE ID: %d\n",id);
    printf("DEPARTMENT: %s\n",dep);
    printf("SALARY(lpa): %.2f\n",salary);
    printf("-------------------------------\n");
    return;
}
int main()
{
    int id;
    char name[50],dep[50];
    float sal;
    printf("Enter name, ID, department, salary of the employee:");
    scanf("%s %d %s %f",&name,&id,&dep,&sal);
    info(name,id,dep,sal);
    return 0;
}