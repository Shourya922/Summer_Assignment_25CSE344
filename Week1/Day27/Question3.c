#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross;

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;

    printf("\n----- Salary Slip -----\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}
