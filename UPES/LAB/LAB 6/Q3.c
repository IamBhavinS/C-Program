/*Write a program to read a list of integers and store it in a single dimensional array. 
Write a C program to find the frequency of a particular number in a list of integers*/

#include <stdio.h>

int main() {
    int n, i, num, freq = 0;

// Asking the user for number of elements they want in the array
    printf("Enter the number of elements: ");
    if ((scanf("%d", &n) != 1 || n < 1)) {
        printf("ERROR: Please enter a valid positive number.\n");
        return 1;
    }

    int ar[n]; 

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &ar[i]) != 1) {
            printf("ERROR: Please enter a valid number.\n");
            return 1;
        }
    }

// Asking user which number's frequency to find
    printf("Enter the number to find its frequency: ");
    if (scanf("%d", &num) != 1) {
        printf("ERROR: Invalid input.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (ar[i] == num)
            freq++;
    }

    printf("The frequency of %d is: %d\n", num, freq);

    return 0;
}

