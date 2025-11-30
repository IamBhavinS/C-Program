//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

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
        if (str[i] == ' ')
       str [i] = '-' ;
        i++;
    }

    printf ("%s ",str);
    return 0;

   
}