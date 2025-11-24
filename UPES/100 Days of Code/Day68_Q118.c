/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n, nums[100];
    int sum = 0, total;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers (from 0 to %d, missing one): ", n, n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    
    total = n * (n + 1) / 2;
    
    printf("Missing number is: %d\n", total - sum);
    
    return 0;
}
