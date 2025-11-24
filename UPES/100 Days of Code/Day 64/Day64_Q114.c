/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, len, maxLen = 0, start;


    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len; i++) {
        int visited[256] = {0};  
        int currLen = 0;

        for(j = i; j < len; j++) {
            if(visited[(int)s[j]] == 1)  
                break;
            else {
                visited[(int)s[j]] = 1;  
                currLen++;                
            }
        }

     
        if(currLen > maxLen)
            maxLen = currLen;
    }


    printf("%d\n", maxLen);

    return 0;
}
