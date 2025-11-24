
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    findRoots(a, b, c);
}

float getDiscriminant(float a, float b, float c) {
    return (b * b - 4 * a * c);
}


void findRoots(float a, float b, float c) {
    float d = getDiscriminant(a, b, c);
    float root1, root2, realPart, imagPart;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } 
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } 
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi , %.2f - %.2fi\n", 
                realPart, imagPart, realPart, imagPart);
    }
}
