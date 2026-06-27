#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", b[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            printf("\nBook Records\n");
            printf("-------------------------\n");

            for (i = 0; i < n; i++) {
                printf("Book ID : %d\n", b[i].id);
                printf("Title   : %s\n", b[i].title);
                printf("Author  : %s\n\n", b[i].author);
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("\nBook Found!\n");
                    printf("Book ID : %d\n", b[i].id);
                    printf("Title   : %s\n", b[i].title);
                    printf("Author  : %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
