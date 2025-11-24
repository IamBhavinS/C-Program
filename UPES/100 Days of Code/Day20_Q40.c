/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main()
{
    int num, digit, onesComplement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        onesComplement += (digit == 0 ? 1 : 0) * place;
        num /= 10;
        place *= 10;
    }
    printf("1's complement is: %d\n", onesComplement);
    return 0;
}