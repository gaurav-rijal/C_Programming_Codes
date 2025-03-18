// WAP TO INPUT THREE NUMBERS AND FIND THE MIDDLE ONE.

#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("Enter three numbers: \n");
    scanf ("%d %d %d", &a,&b,&c);

    if ( (a>b && a<c) || (a<b && a>c) )
      {
        printf (" \n  %d is middle number. ", a);
      }
    if ( (b>a && b<c) || (b<a && b>c)  )
    {
        printf (" %d is middle number ", b);
    }
    if ( (c>b && c<a) || (c<b && c>a) )
    {
        printf (" %d is middle number. ", c);
    }
    

}