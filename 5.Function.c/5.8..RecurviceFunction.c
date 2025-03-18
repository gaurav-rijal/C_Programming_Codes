// WAP A PROGRAM TO DISPLAY THE FACTORIAL OF ENTERED NUMBER USING FRECURVICE FUNCTION.
#include<stdio.h>
int facto(int);
int main()
{
    int n;
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("Error!!! Enter a positive number.");
    }
    else 
    {
          printf("\nThe factorial of %d is %d.",n,facto(n));
    }
   
    return 0;
}
int facto(int a)
{
    if(a == 0)
    return 1;
    else
    return (a * facto(a-1));
}

