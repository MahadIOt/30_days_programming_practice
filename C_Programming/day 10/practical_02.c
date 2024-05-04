#include <stdio.h>

// Function to calculate the nth term of Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, result;

    printf("Enter the value of n to find the nth Fibonacci term: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. n should be non-negative.\n");
        return 1; // Return non-zero value to indicate error
    }

    result = fibonacci(n);
    printf("The %dth term of the Fibonacci sequence is: %d\n", n, result);

    return 0;
}