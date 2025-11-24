/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main(){

    int n =5;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = n-1;i>0;i--){
        for(int j = i*2-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}