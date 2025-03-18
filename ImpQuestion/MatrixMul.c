// WAP to perform multiplication of two matrices and display the result. 
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter the number of row/s and colum/s for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2] ;
    int i, j, k;

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

 /* printf("\nThe first matrix is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }   */

 /* printf("\nThe second matrix is:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }     */

    printf("\nResult of matrix multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
