// write a c program that calculates and prints the factorial of a number entered by the user.
#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the entered number is negative
    if (num < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using a for loop
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}
