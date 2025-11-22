/*Write a program to print the multiplication table of the number entered by the user. 
It should be in the correct formatting.Num * 1 = Num */
#include <stdio.h>

int main() {
    int num, i;

//Asking the User,which Number's Multiplication table has to Displayed
    printf("Enter a number to print its multiplication table: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 0;
    }
    printf("\n--- Multiplication Table of %d ---\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d * %2d = %d\n", num, i, num * i);
    }

    return 0;
}
