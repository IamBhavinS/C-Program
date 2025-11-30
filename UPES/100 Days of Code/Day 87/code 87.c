//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], cleaned[200];
    int i=0,sp=0,digit=0,spaces=0;
    printf ("Enter string\n");
    fgets (str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] == ' ')
            spaces++;
       else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            // ignore alphabets
        }
        else  if (str[i] != '\n')   // ignore newline from fgets
            sp++;
        i++;
    }

    printf ("Spaces = %d\n",spaces);
    printf ("Digits = %d\n",digit);
    printf ("Special characters = %d\n",sp);
    return 0;

   
}