// Write a C program to add and subtract two matrices of the same size.


#include <stdio.h>

void add(int r, int c, int a[][100], int b[][100]);
void sub(int r, int c, int a[][100], int b[][100]);

int main() {
    int r, c;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &r, &c);

    int a[100][100], b[100][100];
    
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    add(r, c, a, b);
    sub(r, c, a, b);

    return 0;
}

void add(int r, int c, int a[][100], int b[][100]) {
    int sum[100][100];
    
    printf("\nSum is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void sub(int r, int c, int a[][100], int b[][100]) {
    int diff[100][100];
    
    printf("\nDifference is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
}
