/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter no of lines: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        int m = 1;
        for(int j = 0;j<=i;j++){
            printf("%d",m);
            m++;
        }
        printf("\n");       
    }
    return 0;
}