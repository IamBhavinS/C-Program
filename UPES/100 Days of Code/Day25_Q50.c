/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main(){

    for(int i = 0;i<5;i++){
        for(int z=0;z<i;z++){
            printf(" ");
        }
        for(int j = 5;j>i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}