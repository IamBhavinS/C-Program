/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.
*/

#include <stdio.h>

int main(){

    int n = 4;
    for(int i = 0;i<n;i++){
        for(int z = n-1;z>i;z--){
            printf(" ");
        }
        for(int j = 0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = n-1;i>0;i--){
        for(int z = n-1;z>=i;z--){
            printf(" ");
        }
        for(int j = i*2-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}