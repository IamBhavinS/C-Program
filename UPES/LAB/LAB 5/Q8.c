/*Declare variables within different code blocks (enclosed by curly braces) and 
test their accessibility within and outside those blocks*/

#include <stdio.h>

int main() {
    int x = 10;
    {
        int y = 20;
        printf("Inside block: Gx = %d, Ly = %d\n", x, y);
    }
    printf("Outside block: Gx = %d\n", x);
    //printf("Outside block: Ly = %d, y); This wont work This will give error
    return 0;
}

