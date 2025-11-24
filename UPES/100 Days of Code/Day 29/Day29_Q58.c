/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main(){

    int n,min = 10,max=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d values in array: ",n);

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    printf("Max:%d and Min:%d\n",max,min);

    return 0;
}