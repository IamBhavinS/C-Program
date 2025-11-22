/*Write a program to enter numbers till the user wants. 
At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>

int main() {
    int n, i, num;
    int pos = 0, neg = 0, zero = 0;

//Asking the user How many Numbers he/she wants
    printf("How many numbers do you want to enter? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

//Asking the user the values of the Numbers
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);

        if (scanf("%d", &num) != 1) {
            printf("Invalid input! Only numbers are allowed.\n");
            return 0;
        }

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }
    printf("===>Result<===\n");
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}



