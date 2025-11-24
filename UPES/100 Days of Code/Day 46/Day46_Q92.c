/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char repeat = '\0';

    printf("Enter a string: ");
    scanf("%s", str); 

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) { 
                repeat = str[i];
                break;
            }
        }
        if (repeat != '\0')
            break;
    }

    if (repeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", repeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
