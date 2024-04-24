// Write a C program to find the maximum value in the array of integers.
#include <stdio.h>

int main() {
    int size, max;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array of integers with the given size
    int array[size];
    
    // Fill the array with user input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    // Find the maximum value in the array
    max = array[0];  // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    
    // Display the maximum value
    printf("The maximum value in the array is: %d\n", max);
    
    return 0;
}
