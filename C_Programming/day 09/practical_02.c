#include <stdio.h>

// Function prototype
int isEvenOrOdd(int num);

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the isEvenOrOdd function and print the result
    if (isEvenOrOdd(num) == 1) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

// Function definition for isEvenOrOdd
int isEvenOrOdd(int num) {
    // Check if the number is even or odd
    if (num % 2 == 0) {
        return 1; // 1 represents even
    } else {
        return 0; // 0 represents odd
    }
}