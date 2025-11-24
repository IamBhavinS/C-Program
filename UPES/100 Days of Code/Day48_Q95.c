/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, k, len1 = 0, len2 = 0, found = 0;
    printf("Enter two strings: ");
    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        len1++;
    for (i = 0; str2[i] != '\0'; i++)
        len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
 
    for (i = 0; i < len1; i++) {
        found = 1;  
        for (j = 0; j < len1; j++) {
            k = (i + j) % len1; 
            if (str1[j] != str2[k]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}
