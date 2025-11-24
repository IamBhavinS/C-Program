/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main(){

    for(int i = 5;i>=1;i--){
        for(int j = i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}