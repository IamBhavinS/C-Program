/*Declare a global variable outside all functions and use it inside various functions to understand its accessibility.*/

#include <stdio.h>

// global variable
int x = 5;

void fun1() {
    printf("Inside fun1, x = %d\n", x);
    x = 10;
}

void fun2() {
    printf("Inside fun2, x = %d\n", x);
}

int main() {
    printf("Inside main, x = %d\n", x);
    fun1();
    fun2();
    return 0;
}
