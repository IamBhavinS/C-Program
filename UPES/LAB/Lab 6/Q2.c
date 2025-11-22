/*Write a program to read a list of integers and store it in a single dimensional array.
 Write a C program to count and display positive, negative, odd, and even numbers in an array.*/
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, odd = 0, even = 0;

//Asking the user for number of elements they want in the array
    printf("Enter the number of elements: ");
    if((scanf("%d", &n) !=1 || n<1 )){
        printf("EROOR:Please enter a Valid Positive Number");
        return 1;
    }
    int ar[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        if((scanf("%d", &ar[i])!=1)){
            printf("EROOR:Please enter a Valid Number");
            return 1;
        }
    }
// Counting positive, negative, odd, and even
    for (i = 0; i < n; i++) {
        if (ar[i] >= 0)
            positive++;
        else
            negative++;

        if (ar[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("No.of Positive Numbers: %d\n", positive);
    printf("No.of Negative Numbers: %d\n", negative);
    printf("No.of Even Numbers: %d\n", even);
    printf("No.of Odd Numbers: %d\n", odd);

    return 0;
}
