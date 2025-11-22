#include <stdio.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef struct {
    float real;
    float imag;
} Complex;

void readComplex(Complex *c) {
    printf("Enter real part: ");
    if (scanf("%f", &c->real) != 1) {
        printf("Invalid input.\n");
        clearInput();
        c->real = 0;
    }

    printf("Enter imaginary part: ");
    if (scanf("%f", &c->imag) != 1) {
        printf("Invalid input.\n");
        clearInput();
        c->imag = 0;
    }
}

void printComplex(Complex c) {
    printf("%.2f + %.2fi", c.real, c.imag);
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    Complex c1, c2, sum, diff;
    int choice;

    while (1) {
        printf("\n--- COMPLEX NUMBER OPERATIONS ---\n");

        printf("\nEnter first complex number:\n");
        clearInput();
        readComplex(&c1);

        printf("\nEnter second complex number:\n");
        readComplex(&c2);

        sum = add(c1, c2);
        diff = subtract(c1, c2);

        printf("\nFirst number: ");
        printComplex(c1);

        printf("\nSecond number: ");
        printComplex(c2);

        printf("\n\nAddition: ");
        printComplex(sum);

        printf("\nSubtraction: ");
        printComplex(diff);

        // continue?
        printf("\n\n1. Run again\n2. Quit\nEnter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice, restarting.\n");
            clearInput();
            continue;
        }

        if (choice == 2) {
            printf("Done.\n");
            break;
        }

        clearInput();
    }

    return 0;
}
