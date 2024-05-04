#include <stdio.h>

// Function to calculate the power of a number using recursion
double power(double base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0)
        return 1;
    // If exponent is negative, calculate reciprocal
    else if (exponent < 0)
        return 1 / power(base, -exponent);
    // Recursive case: multiply base by itself exponent times
    else
        return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the result
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}