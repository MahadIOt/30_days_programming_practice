#include <stdio.h>

int main() {
    float num1, num2;
    float sum, average;
    
    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Calculate the average
    average = sum / 2;

    // Display the sum and average
    printf("The sum of %f and %f is: %f\n", num1, num2, sum);
    printf("The average of %f and %f is: %f\n", num1, num2, average);

    return 0;
}
