// WAP TO DISPLAY THE ODD NUMBERS FROM 1 TO 100 USING FOR LOOP.

#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
        if ( i%2 != 0 )
        {
            printf("%d \t",i);
        }
    }
    return 0;
}