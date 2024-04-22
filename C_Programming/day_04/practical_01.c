#include <stdio.h>

int main() {
    char choice;

    printf("Are you feeling hungry (y/n)? ");
    scanf(" %c", &choice);  // Read a single character with a space before

    if (choice == 'y' || choice == 'Y') {
        printf("Great! Let's grab some food.\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("Alright, no problem. Do you want to work on something (y/n)? ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printf("Sounds good! Let's get productive.\n");
        } else if (choice == 'n' || choice == 'N') {
            printf("Then how about relaxing for a bit? (y/n) ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                printf("Perfect! Take some time to unwind.\n");
            } else {
                printf("Hmm, not sure what you feel like doing then. Maybe explore some options online?\n");
            }
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    } else {
        printf("Invalid input. Please enter 'y' or 'n'.\n");
    }

    return 0;
}
