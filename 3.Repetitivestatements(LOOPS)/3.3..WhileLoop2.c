// WAP TO DISPLAY THE EVEN NUMBERS FROM 30 TO 1 USING WHILE LOOP.

#include<stdio.h>
int main()
{
    int i=30;
    while(i>=1)
    {
        if (i%2==0)
        {
            printf("%d \t",i);
        }
     i--;
    }
    return 0; 
}