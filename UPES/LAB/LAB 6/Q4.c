/*Write a program that reads two matrices A (m x n) and B (p x q) and computes the 
product of A and B . Read matrix A and matrix B in tow major order respectively.Print both 
the input matrices and resultant matrix with suitable headings and output should be in 
matrix format only.Program must check the compatibility of orders of the matrices for 
multiplication.Report appropriate message in case of incompatibility  */
#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of Matrix A: ");
    if ((scanf("%d %d", &m, &n) != 2) || m < 1 || n < 1) {
        printf("Invalid input! Please enter positive integers only.\n");
        return 1;
    }

    printf("Enter rows and columns of Matrix B: ");
    if ((scanf("%d %d", &p, &q) != 2) || p < 1 || q < 1) {
        printf("Invalid input! Please enter positive integers only.\n");
        return 1;
    }

    // Checking if the matrix is multipliable
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Columns of A (%d) must equal rows of B (%d).\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Invalid input! Please enter numbers only.\n");
                return 1;
            }
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Invalid input! Please enter numbers only.\n");
                return 1;
            }
        }
    }

    // Multiplying matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Displaying B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    // Displaying C
    printf("\nResultant Matrix (A x B) (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
