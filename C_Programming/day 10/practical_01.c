#include <stdio.h>

// Function to calculate the length of a string
int string_length(char *str) {
    int length = 0;
    // Iterate over the string until the null terminator is encountered
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    // Read input from the user
    scanf("%s", str);
    // Calculate and print the length of the string
    printf("Length of the string: %d\n", string_length(str));
    return 0;
}