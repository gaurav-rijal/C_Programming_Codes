// Wap to input 3*3 two matrix and display their sum.

#include<stdio.h>
int main ()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("Input first matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nInput second matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe sum of two matrix is: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("\t%d\t",sum[i][j]);
        }
        printf("\n");
    }
                   /*  printf("\nThe sum of two matrix is: \n");
                   for (i=0; i<3; i++)
                  { 
                   for (j=0; j<3; j++)
                     {
                         printf("\t%d\t",sum[i][j]);
                     }
                     printf("\n");
                  }     */
return 0;
}