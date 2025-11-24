/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() {
    int n, nums[100];
    int seen[1000] = {0}; // assuming numbers are in the range 0-999
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers (one number is repeated): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        
        // Check if the number has been seen before
        if(seen[nums[i]] == 1) {
            printf("Repeated element is: %d\n", nums[i]);
            return 0; // exit after finding the repeated element
        }
        
        // Mark this number as seen
        seen[nums[i]] = 1;
    }
    
    return 0;
}