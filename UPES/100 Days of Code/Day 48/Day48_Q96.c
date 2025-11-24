/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == ' ' || str[i] == '\n' || str[i + 1] == '\0') {

            if (str[i] == '\n' || str[i] == ' ')
                end = i - 1;
            else
                end = i;

            int j = start, k = end;
            while (j < k) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
                j++;
                k--;
            }

            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
