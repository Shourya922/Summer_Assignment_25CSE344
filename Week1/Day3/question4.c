#include <stdio.h>
int main() {
    int a, b, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}
