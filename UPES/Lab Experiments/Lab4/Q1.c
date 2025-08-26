/*Write a C program that takes the three sides of a triangle as input from the user. 
First, check whether the triangle is valid or not. If the triangle is valid, 
then determine whether it is Equilateral, Isosceles, Right-angled, or Scalene.*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // valid or not
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");

        // equilateral
        if (a == b && b == c) {
            printf("It is an EQUILATERAL triangle.\n");
        }
        //Isosceles
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES triangle.\n");
        }
        //Right-angled
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b)) {
            printf("It is a RIGHT-ANGLED triangle.\n");
        }
        //Scalene
        else {
            printf("It is a SCALENE triangle.\n");
        }
    } else {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}
