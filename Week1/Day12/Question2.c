#include <stdio.h>

int armstrong(int n) {
    int sum = 0, temp = n, digit;

    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
