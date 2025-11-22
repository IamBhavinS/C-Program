#include <stdio.h>
#include <string.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void reverse(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[200];
    int choice;

    while (1) {
        printf("\n--- STRING REVERSER ---\n");

        printf("Enter a string: ");
        clearInput();
        if (!fgets(str, sizeof(str), stdin)) {
            printf("Invalid input.\n");
            clearInput();
            continue;
        }

        str[strcspn(str, "\n")] = '\0';

        reverse(str);

        printf("\nReversed string: %s\n", str);

        // continue?
        printf("\n1. Run again\n2. Quit\nEnter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice, restarting.\n");
            clearInput();
            continue;
        }

        if (choice == 2) {
            printf("Done.\n");
            break;
        }

        clearInput();
    }

    return 0;
}
