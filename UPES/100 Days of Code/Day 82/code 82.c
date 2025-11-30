//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read input including spaces
   // count characters one by one until '\0'
    while (str[count] != '\0') 
    {
        {
            printf ("%c",str[count]);
    }
    printf("\n");
    count ++;
    }

   
    return 0;
}