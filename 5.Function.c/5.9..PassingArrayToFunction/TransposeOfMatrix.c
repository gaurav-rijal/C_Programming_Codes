// WAP TO DISPLAY TRANSPOSE OF MATRIX USING FUNCTION.
#include<stdio.h>
void trans(int a[30][30], int r, int c);
int main()
{
    int a[30][30];
    int i,j,r,c;
    printf("Enter the numbers of rows and columns of matrix:\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix:\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    trans(a,r,c);
    return 0;
}
void trans(int a[30][30], int r, int c)
{
    int i,j;
     printf("The orginal matrix is:\n");
    for ( i=0; i<r; i++)
    {
        for ( j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }  
    printf("The transpose of matrix is:\n");
     for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}