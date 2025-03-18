#include<stdio.h>

// Adjusted the function prototype to include row and column parameters.
void trans(int a[30][30], int r, int c);

int main() {
    int a[30][30];
    int i, j, r, c;
    printf("Enter the numbers of rows and columns of matrix:\n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Pass the dimensions of the matrix to the function as well.
    trans(a, r, c);
    return 0;
}

// Updated function signature to accept row and column sizes.
void trans(int a[30][30], int r, int c) {
    int i, j;
    printf("The original matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("The transpose of matrix is:\n");
    // Correct the loop conditions for transpose logic.
    for (i = 0; i < c; i++) { // Loop through columns for the outer loop
        for (j = 0; j < r; j++) { // Loop through rows for the inner loop
            printf("%d\t", a[j][i]); // Swap the indices to get the transpose
        }
        printf("\n");
    }
}