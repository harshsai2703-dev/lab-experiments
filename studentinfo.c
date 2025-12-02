//Write a program using a function to display a student’s name, roll number, and marks.
#include<stdio.h>

void info(char name[50],int roll,int marks)
{
    printf("------------------------------\n");
    printf("STUDENT NAME: %s\n",name);
    printf("ROLL NO.: %d\n",roll);
    printf("MARKS(out of 100):%d\n",marks);
    printf("-------------------------------\n");
    return;
}
int main(){
    int marks,roll;
    char name[50];
    printf("Enter name of the student-");
    scanf("%s",&name);
    printf("Enter the student's roll no.-");
    scanf("%d",&roll);
    printf("Enter marks obtained by student-");
    scanf("%d",&marks);
    info(name,roll,marks);
    return 0;
}