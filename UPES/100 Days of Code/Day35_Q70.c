/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;  
    int temp[k];
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}