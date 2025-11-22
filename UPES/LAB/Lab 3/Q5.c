//Write a program to calculate the area and perimeter of a rectangle based on its length and width
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("===> Rectangle Calculator <===\n");

    // Asking user for length and breadth
    printf("Enter the length of the rectangle: ");
    if (scanf("%f", &length) != 1 || length <= 0) {
        printf("ERROR: Please enter a valid positive number.\n");
        return 1;
    }

    printf("Enter the width of the rectangle: ");
    if (scanf("%f", &width) != 1 || width <= 0) {
        printf("ERROR: Please enter a valid positive number.\n");
        return 1;
    }

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\n===> Results <===\n");
    printf("Length   : %.2f \n", length);
    printf("Width    : %.2f \n", width);
    printf("Area     : %.2f \n", area);
    printf("Perimeter: %.2f \n", perimeter);

    return 0;
}
