#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel (lowercase or uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    // Print the number of vowels
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}