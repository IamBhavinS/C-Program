//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void counterFunction() {
    static int count = 0;
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}
