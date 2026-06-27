#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("\n----- Book Details -----\n");
    printf("Book ID : %d\n", b.id);
    printf("Title   : %s\n", b.title);
    printf("Author  : %s\n", b.author);

    return 0;
}
