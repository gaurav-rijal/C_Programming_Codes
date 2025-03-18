// WAP A PROGRAM TO FIND YOUR ENTERED NUMBER IS POSTIVE, NEGATIVE OR ZERO.

#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter any number: ");
    scanf ("%d", &n);

    if (n>0)
    {
        printf ("Your number is Positive.");
    }
    else if (n<0)
    {
         printf ("Your number is Negative.");
    }
    else
    {
        printf ("Your number is Zero.");
    }
    return 0;
}