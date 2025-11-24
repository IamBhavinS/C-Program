/*Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise.
Write a C program that invokes this function to generate prime numbers between the given ranges*/

#include <stdio.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// return 1 if prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end, choice;

    while (1) {
        printf("\n--- PRIME NUMBER GENERATOR ---\n");

        printf("Enter start of range: ");
        if (scanf("%d", &start) != 1) {
            printf("Invalid input! Enter integers only.\n");
            clearInput();
            continue;
        }

        printf("Enter end of range: ");
        if (scanf("%d", &end) != 1) {
            printf("Invalid input! Enter integers only.\n");
            clearInput();
            continue;
        }

        if (start > end) {
            printf("Start cannot be greater than end.\n");
            clearInput();
            continue;
        }

        printf("\nPrime numbers between %d and %d:\n", start, end);

        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");

        // Continue?
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
