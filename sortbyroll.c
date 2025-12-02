#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char fname[30];
    char lname[30];
};

int main() {
    struct Student s[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("First Name: ");
        scanf("%s", s[i].fname);
        printf("Last Name: ");
        scanf("%s", s[i].lname);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (s[j].roll_no > s[j + 1].roll_no) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n\nRecords in Ascending Order of Roll Number:\n");
    printf("Roll No\tFirst Name\tLast Name\n");

    for (i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%s\n",
               s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}