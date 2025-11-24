/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main(){

    int l,c = 0;
    printf("Enter length of an array: ");
    scanf("%d",&l);

    int a[l];
    int r[l];

    printf("Enter %d element in array: ",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&a[i]);
    }

    for(int i = l-1;i>=0;i--){
        int n = a[i];
        r[c] = n;
        c++;
    }

    printf("Reversed array is: ");
    for(int i = 0;i<l;i++){
        printf("%d ",r[i]);
    }
    printf("\n");

    return 0;
}