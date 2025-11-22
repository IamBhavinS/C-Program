/*Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function.*/

#include <stdio.h>

// Global variable
int x = 100;

void myFunction() {
// Local variable
    int y = 50;
    
    printf("Inside myFunction:\n");
    printf("Local variable = %d\n", y);   
    printf("Global variable = %d\n", x);    
}

int main() {
    myFunction();

    printf("\nInside main:\n");
    // printf("Local variable = %d\n", y)if i run this it will show erorr
    printf("Global variable = %d\n", x);

    return 0;
}
