#include <stdio.h>

void trans(int a[][10]);

int main() {
    int a[10][10], r, c;
    int i,j;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &r, &c);

    // Input matrix elements
    printf("\nEnter matrix elements:\n");
    for ( i = 0; i < r; ++i) {
        for ( j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Print the entered matrix
    printf("\nEntered matrix:\n");
    for ( i = 0; i < r; ++i) {
        for ( j = 0; j < c; ++j) {
            printf("%d ", a[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }

    

    // Print the transpose
    printf("\nTranspose of the matrix:\n");
    for ( i = 0; i < c; ++i) {
        for ( j = 0; j < r; ++j) {
        	
            printf("%d ", a[j][i]);
			{        if (j == r - 1) 
                printf("\n");
            }
        }
    }

    return 0;
}
