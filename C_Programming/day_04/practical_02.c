#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle non-positive numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for divisibility by 2 (optimized)
    if (num % 2 == 0 && num > 2) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Iterate from 3 to square root of num, checking for divisibility by odd numbers only
    for (i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    // If no divisors found, it's prime
    printf("%d is a prime number.\n", num);

    return 0;
}
