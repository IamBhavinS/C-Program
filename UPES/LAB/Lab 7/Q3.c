#include <stdio.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// recursive fibonacci 
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num, choice;

    while (1) {
        printf("\n--- FIBONACCI SEQUENCE ---\n");

        printf("Enter a non-negative integer: ");
        if (scanf("%d", &num) != 1 || num < 0) {
            printf("Invalid input! Enter a non-negative integer only.\n");
            clearInput();
            continue;   
        }

        printf("\nFibonacci sequence up to %d terms:\n", num);

        // sequence
        for (int i = 0; i < num; i++) {
            printf("%d ", fibo(i));
        }
        printf("\n");

        // continue?
        printf("\nDo you want to run again?\n");
        printf("1. Yes\n2. No (Quit)\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice! Restarting...\n");
            clearInput();
            continue;
        }

        if (choice == 2) {
            printf("Done\n");
            break;
        }

        clearInput();
    }

    return 0;
}
