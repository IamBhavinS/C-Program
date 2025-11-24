/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.


Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
 
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
  
    printf("Enter target value: ");
    scanf("%d", &target);
    

    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            first = i;
            break;
        }
    }
    
  
    for(i = n - 1; i >= 0; i--) {
        if(nums[i] == target) {
            last = i;
            break;
        }
    }
    
    
    printf("%d,%d\n", first, last);
    
    return 0;
}
