/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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

    for (int col = 0; col < n; col++) {
        int start_col = col;
        int start_row = 0;
        while (start_col >= 0) {
            printf("%d ", matrix[start_row][start_col]);
            start_col--;
            start_row++;
        }
    }

    for (int row = 1; row < n; row++) {
        int start_row = row;
        int start_col = n - 1;
        while (start_row < n) {
            printf("%d ", matrix[start_row][start_col]);
            start_row++;
            start_col--;
        }
    }

    return 0;
}
