//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main() {
    char str[100];
    int len = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // find length
    while (str[len] != '\0')
    {
        len++;
    }
   // fgets includes '\n', remove it
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // reverse using swapping
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);
    return 0;
}
