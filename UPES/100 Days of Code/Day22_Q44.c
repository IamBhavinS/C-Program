/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main(){

    int n;
    float N = 1,D = 1;
    float  sum = 0;
    printf("Enter n terms: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        
        sum += (N/D);
        N =N+ 2;
        D =N;
        D =D+ 1;
    }
    printf("Sum is:%.2f\n",sum);

    return 0;
}