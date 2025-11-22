/*Develop a recursive and non-recursive function FACT(num) to 
find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. 
Otherwise, FACT(n) = n * FACT(n-1). Using this function, 
write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages*/

#include <stdio.h>

//unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// recursive factorial
long long factRec(int n) {
    if (n == 0) return 1;
    return n * factRec(n - 1);
}

// nonrecursive factorial
long long factNonRec(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// binomial coefficient
long long nCr(int n, int r) {
    return factNonRec(n) / (factNonRec(r) * factNonRec(n - r));
}

int main() {
    while (1) {
        int n, r, choice;

        printf("\n--- BINOMIAL COEFFICIENT PROGRAM ---\n");

        // input for n
        printf("Enter value of n (>=0): ");
        if (scanf("%d", &n) != 1 || n < 0) {
            printf("Invalid input! n must be a non-negative integer.\n");
            clearInput();
            continue;
        }

        // input for r
        printf("Enter value of r (>=0 and <= n): ");
        if (scanf("%d", &r) != 1 || r < 0 || r > n) {
            printf("Invalid input! r must be between 0 and n.\n");
            clearInput();
            continue;
        }

        // result
        long long result = nCr(n, r);
        printf("\nC(%d, %d) = %lld\n", n, r, result);

        // table
        printf("\n--- TABLE FOR VALUES 0..n ---\n");
        for (int i = 0; i <= n; i++) {
            if (r <= i) {
                printf("C(%d, %d) = %lld\n", i, r, nCr(i, r));
            } else {
                printf("C(%d, %d) = Not defined (r > n)\n", i, r);
            }
        }

        // continue?
        printf("\nDo you want to run again?\n");
        printf("1. Yes\n2. No (Quit)\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice! Restarting program...\n");
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
