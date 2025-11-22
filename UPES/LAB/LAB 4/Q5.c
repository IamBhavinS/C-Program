/*Write a program using ternary operator, the user should input the length and breadth of a rectangle,
one has to find out which rectangle has the highest perimeter.
The minimum number of rectangles should be three.*/ 

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of rectangles (minimum 3): ");
    
    //asking the user how many rectanglesd does the  user want
    if (scanf("%d", &n) != 1 || n < 3) {
        printf("Error: You must enter a numeric value and minimum should be 3.\n");
        return 0;
    }

    float length, breadth, perimeter;
    float maxPerimeter = 0;
    int maxIndex = 0;

    for (i = 1; i <= n; i++) {
        printf("Enter length and breadth of rectangle %d: ", i);
        if (scanf("%f %f", &length, &breadth) != 2 || length <= 0 || breadth <= 0) {
            printf("Error: Invalid input. Length and breadth must be positive numbers.\n");
            return 1;
        }

        perimeter = 2 * (length + breadth);

        // ternary operator
        maxIndex = (perimeter > maxPerimeter) ? i : maxIndex;
        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter;
    }

    printf("Rectangle %d has the highest perimeter: %.2f\n", maxIndex, maxPerimeter);

    return 0;
}

