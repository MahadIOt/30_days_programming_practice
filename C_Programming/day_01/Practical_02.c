#include <stdio.h>

int main() {
    char name[50]; // Assuming the name will not exceed 50 characters
    
    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf("%s", name); // Read the name entered by the user
    
    // Print a personalized greeting
    printf("Hello, %s! Welcome to C programming!\n", name);
    
    return 0;
}
