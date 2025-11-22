#include <stdio.h>

int main() {
    int a = 74, *pi = &a;
    float b = 69.9f, *pf = &b;
    char c = 'z', *pc = &c;

    printf("Original addresses:\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n\n", (void*)pc);

    // increment
    pi++;
    pf++;
    pc++;

    printf("After increment (p++):\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n\n", (void*)pc);

    // decrement
    pi--;
    pf--;
    pc--;

    printf("After decrement (p--):\n");
    printf("pi = %p\n", (void*)pi);
    printf("pf = %p\n", (void*)pf);
    printf("pc = %p\n", (void*)pc);

    return 0;
}
