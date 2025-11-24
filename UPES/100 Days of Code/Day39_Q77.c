/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

    int is_distinct = 1;
    int diagonal[10]; 
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct == 0)
            break;
    }

    if (is_distinct)
        printf("True; Diagonal elements are distinct\n");
    else
        printf("False; Diagonal elements are NOT distinct\n");

    return 0;
}
