/*Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int fact(int);

int fact(int n){
    int m = n, f = 1;
    for(int i= 1;i<=m;i++){
        f *= i;
    }
    return f;
}

int main(){

    int n,m,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n;
    while(m>0){
        int digit = m%10;
        sum += fact(digit);
        m /= 10;
    }

    if(sum==n){
        printf("%d is a Strong Number\n",n);
    }
    else
        printf("%d is not a Strong Number\n",n);

    return 0;
}