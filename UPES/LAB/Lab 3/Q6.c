//Write a program to convert temperature from celsius to fahrenheit using the formula. F=(c*9/5)+32.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("===> Celsius to Fahrenheit Converter <===\n");

    // Asking the user for the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("ERROR: Please enter a valid number!\n");
        return 1;
    }

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\n===> Result <===\n");
    printf("Celsius      : %.2f C\n", celsius);
    printf("Fahrenheit   : %.2f F\n", fahrenheit);

    return 0;
}
