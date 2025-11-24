/*Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
    int a, b, swap;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    swap = a;
    a = b;
    b = swap;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
