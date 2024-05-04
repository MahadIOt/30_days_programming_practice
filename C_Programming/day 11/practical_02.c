#include <stdio.h>

// Function to calculate the number of digits in an integer
int count_digits(int num) {
    int count = 0;
    
    // Handle negative numbers by taking absolute value
    if (num < 0)
        num = -num;

    // Count digits using a loop
    do {
        count++;
        num /= 10;
    } while (num != 0);

    return count;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the count_digits function and print the result
    printf("Number of digits in %d is: %d\n", number, count_digits(number));

    return 0;
}