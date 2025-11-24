/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter expression a: ");
    scanf("%d", &a);
    printf("Enter expression b: ");
    scanf("%d", &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Division by zero error\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%d\n", a % b);
            } else {
                printf("Division by zero error\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}