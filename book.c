#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void display(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Title: ");
    scanf(" %[^\n]", b1.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b1.author);

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    display(b1);

    return 0;
}