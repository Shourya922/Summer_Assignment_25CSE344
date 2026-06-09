#include <stdio.h>

int main() {
    int n, original, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        printf("%d is a Palindrome Number", original);
    else
        printf("%d is not a Palindrome Number", original);

    return 0;
}
