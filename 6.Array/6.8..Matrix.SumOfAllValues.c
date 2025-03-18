//Wap to input 3*3 matrix and display the sum of all values inside the matrix.
#include <stdio.h>
int main ()
{
    int n[3][3],i,j,sum = 0;
    printf("Enter 3*3 matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf(" %d",&n[i][j]);
            sum += n[i][j];
        }
    }
       printf("The sum of values in the given matrix is %d.",sum);
       return 0;
}