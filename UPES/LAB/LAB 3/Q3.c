//Write a program that prompts the user to enter their name and age.

#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("===>User Information Program<===\n");
    // Asking the user for information
    printf(" Enter your name: ");
    scanf("%s", name);

    printf(" Enter your age : ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf(" ERROR: Please enter a valid positive number for age.\n");
        return 1;
    }

    printf("\n===>User Details<===\n");
    printf(" Name : %s\n", name);
    printf(" Age  : %d\n", age);
    return 0;
}
