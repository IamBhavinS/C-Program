/*Develop a recursive function GCD (num1, num2) that accepts two integer arguments. 
Write a C program that invokes this function to find the greatest common divisor of two given integers.*/

#include <stdio.h>

//unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// recursive gcd function
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2, choice;

    while (1) {
        printf("\n--- GREATEST COMMON DIVISOR (GCD) PROGRAM ---\n");

        //num1
        printf("Enter first integer: ");
        if (scanf("%d", &num1) != 1) {
            printf("Invalid input! Please enter an integer value.\n");
            clearInput();
            continue;  
        }

        // num2
        printf("Enter second integer: ");
        if (scanf("%d", &num2) != 1) {
            printf("Invalid input! Please enter an integer value.\n");
            clearInput();
            continue;
        }

        //fix for neg value numbers
        if (num1 < 0) num1 = -num1;
        if (num2 < 0) num2 = -num2;

        int result = gcd(num1, num2);
        printf("\nGCD of %d and %d is: %d\n", num1, num2, result);

        //continue?
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
