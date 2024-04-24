// Write a C program to create an array of integers and fill it with user input.
#include <stdio.h>

int main() {
    int size;
    
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
    
    // Display the array
    printf("The array you entered is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
