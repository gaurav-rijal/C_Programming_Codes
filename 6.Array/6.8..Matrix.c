// wap to display the 3*3 matrix.

#include<stdio.h>
int main ()
{
    int n[3] [3],i,j;
    printf("Enter the 3*3 matrix: \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
           scanf(" %d",&n[i][j]);
        }
    }
    
    printf("\nThe 3*3 matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
           printf(" %d\t",n[i][j]);
        }
        printf(" \n");
    }
  return 0;    
}