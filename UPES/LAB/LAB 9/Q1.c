/*Declare different types of pointers (int, float, char) and initialize them with the addresses of variables.
Print the values of both the pointers and the variables they point to*/
#include <stdio.h>

int main() {
//variables
    int a = 74;
    float b = 69.9f;
    char ch = 'z';
//address
    int *pi = &a;
    float *pf = &b;
    char *pc = &ch;

    printf("Variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("ch = %c\n\n", ch);

    printf("Pointer addresses:\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n\n", (void*)pc);

    printf("Values via pointers:\n");
    printf("*pi = %d\n", *pi);
    printf("*pf = %.2f\n", *pf);
    printf("*pc = %c\n", *pc);

    return 0;
}
