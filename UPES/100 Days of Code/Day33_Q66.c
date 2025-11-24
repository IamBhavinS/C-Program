/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, insert, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];  
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &insert);
    pos = n - 1;
    while (pos >= 0 && arr[pos] > insert) {
        arr[pos + 1] = arr[pos];
        pos--;
    }
    arr[pos + 1] = insert;

    printf("Updated array: ");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}