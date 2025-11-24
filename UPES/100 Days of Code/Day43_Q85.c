/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char temp;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str); 

    while (str[length] != '\0') {
        length++;
    }

    j = length - 1; 

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
