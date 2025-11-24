/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[200];
    char longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        } else {
            currLen++;
        }

        if (str[i] == '\0')
            break;
        i++;
    }

   
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
