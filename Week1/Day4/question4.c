#include <stdio.h>

int main() {
    int n, original, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong Number", original);
    else
        printf("%d is not an Armstrong Number", original);

    return 0;
}
