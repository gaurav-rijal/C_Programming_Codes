// Wap to input any number and check either the given number is receivable by 7 but not by 5.

#include <stdio.h>
int main ()
{
    int n;
    printf("Enter any numbers. ");
    scanf ("%d",&n);
    
    if (n%7 == 0 && n%5 !=0 )
      { 
        printf ("The number is divisible by 7 but not by 5.");
      }
    return 0;
}