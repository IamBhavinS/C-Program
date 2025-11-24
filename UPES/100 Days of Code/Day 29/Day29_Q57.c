/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main(){

    int n,sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter values in array: ");

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }

    printf("Sum is:%d\n",sum);

    return 0;
}