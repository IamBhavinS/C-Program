//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // convert lowercase to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // convert uppercase to lowercase
    }

    printf("Output:\n%s\n", str);
    return 0;
}
