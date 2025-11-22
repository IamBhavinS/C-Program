#include <stdio.h>

void updateValues(int *x, float *y, char *z) {
    *x += 10;     // changes integer
    *y += 2.5f;   // changes float
    *z = 'Z';     // changes schar
}

int main() {
    int a = 74;
    float b = 69.9f;
    char c = 'z';

    printf("--- BEFORE changing ---\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    updateValues(&a, &b, &c);

    printf("--- AFTER changing ---\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
