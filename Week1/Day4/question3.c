#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers: ");

    for(num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while(temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}
