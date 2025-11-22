/*Write a program to generate the following set of output.
(a).
1
2 3
4 5 6
(b). 
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/

#include <stdio.h>

int main() {
    char c;
    printf("What output you want?\nOption(a) Number Triangle\nOption(b) Pascals Triangle\na/b?:-");
    scanf("%c",&c);
    if (c=='a' || c=='A') {
        //Part (a)
        printf("Pattern (a):\n");
        int n1 = 3; 
        int num = 1;

        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
             printf("\n");
        }
    }
    else if (c=='b' || c=='B'){
        //Part (b)
        printf("\nPattern (b):\n");
        int n2 = 5; 

        for (int i = 0; i < n2; i++) {
           int val = 1;
           for (int j = 0; j <= i; j++) {
               printf("%d ", val);
               val = val * (i - j) / (j + 1);
            }
            printf("\n");
        }
    }
    else{
        printf("wrong input! choose a/b");
    } 

 return 0;
}
