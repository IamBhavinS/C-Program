/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    float profitLoss = sellingPrice - costPrice;
    float percentage = (profitLoss / costPrice) * 100;

    if (profitLoss > 0) {
        printf("Profit %f\n", percentage);
    } else if (profitLoss < 0) {
        printf("Loss %f\n", -percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}