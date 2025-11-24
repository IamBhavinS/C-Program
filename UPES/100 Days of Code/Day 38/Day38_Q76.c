/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[10][10];  

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int is_symmetric = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; 
                break;
            }
        }
        if (is_symmetric == 0)
            break;
    }

    if (is_symmetric)
        printf("True; Matrix is Symmetric\n");
    else
        printf("False; Matrix is NOT Symmetric\n");

    return 0;
}
