/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, sum = 0, maxSum = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i]; 
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}
