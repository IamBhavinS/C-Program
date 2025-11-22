//Write a C program to add two numbers, take number from user.

#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("===>Addition Program<===\n");

    // Asking the user for the numbers to be added
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("ERROR: Please enter a valid number!\n");
        return 0;
    }

    printf("Enter the Second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("ERROR: Please enter a valid number!\n");
        return 0;
    }

    sum = num1 + num2;

    printf("\n=== Result ===\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    return 0;
}
