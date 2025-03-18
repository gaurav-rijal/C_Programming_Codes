// Wap to input 3*3 matrix and transpose it.

#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the 3*3 matrix: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe transpose of matrix is: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\t%d\t",a[j][i]);
        }
        printf("\n");
    }
}