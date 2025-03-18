//Write a C program to print a right-angled triangle pattern of stars (`*`).
//Or

/*

Print this pattern:
*
*       *
*       *       *
*       *       *       *

*/

#include<stdio.h>
int main()
{
int i,j;

for(i=1; i<=4; i++)
    {
    for(j=1; j<=i; j++)
        {
        printf("%c\t", '*');
        }
    printf("\n");
    }
return 0; 
}