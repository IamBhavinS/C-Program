/*Write a program to read a list of integers and store it in a single dimensional array. 
Write a C program to print the second largest integer in a list of integers.*/

#include <stdio.h>

int main() {
    int n, i;

//Asking the user for number of elements they want in the array
    printf("Enter the number of elements : ");
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

    int largest, second;
    if (ar[0] > ar[1]) {
        largest = ar[0];
        second = ar[1];
    } 
    else {
        largest = ar[1];
        second = ar[0];
    }
// Finding Second Largest Element
    for (i = 2; i < n; i++) {
        if (ar[i] > largest) {
            second = largest;
            largest = ar[i];
        } else if (ar[i] > second && ar[i] != largest) {
            second = ar[i];
        }
    }

    printf("The Second Largest Element in the Array is: %d\n", second);

    return 0;
}
