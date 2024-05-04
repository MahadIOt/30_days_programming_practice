#include <stdio.h>

// Function prototype
int sum(int num1, int num2);

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the sum function and store the result
    int result = sum(num1, num2);

    // Print the result
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// Function definition for sum
int sum(int num1, int num2) {
    return num1 + num2;
}