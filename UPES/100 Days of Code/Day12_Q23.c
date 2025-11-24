/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main() {
    int lateDays, fine = 0;
    printf("Enter late days: ");
    scanf("%d", &lateDays);

    if (lateDays > 30) {
        printf("Membership Cancelled\n");
    } else {
        if (lateDays <= 5) {
            fine = lateDays * 2;
        } else if (lateDays <= 10) {
            fine = (5 * 2) + (lateDays - 5) * 4 + 10;
        } else if (lateDays <= 30) {
            fine = (5 * 2) + (5 * 4) + (lateDays - 10) * 6 + 30;
        }
        printf("Fine ₹%d\n", fine);
    }

    return 0;
}
