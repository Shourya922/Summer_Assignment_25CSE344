#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("\nStudent Added Successfully!\n");
}

void displayStudents() {
    int i;

    if (n == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n===== Student Records =====\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll  : %d\n", s[i].roll);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }
}

void searchStudent() {
    int roll, i, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Found!\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

int main() {
    int choice;

    while (1) {

        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
