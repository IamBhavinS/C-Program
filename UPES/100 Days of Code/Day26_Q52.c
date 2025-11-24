/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main(){

    for(int i = 0;i<3;i++){
        for(int j = 0;j<i*2+1;j++){
            printf("*\n");
        }
        printf("\n\n");
    }

    for(int i = 0;i<2;i++){
        for(int j = 3;j>i*2;j--){
            printf("*\n");
        }
        printf("\n\n");
    }

    return 0;
}