/*Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways.
Write a program to print all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729 12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
*/

#include <stdio.h>

int main() {
    int L = 20;
    int a, b, c, d;

    printf("Ramanujan numbers up to cubes of %d:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a + 1; b <= L; b++) {
            for (c = a; c <= L; c++) {
                for (d = c + 1; d <= L; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;
                    if (sum1 == sum2 && !(a == c && b == d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}
