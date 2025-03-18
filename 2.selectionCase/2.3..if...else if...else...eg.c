#include <stdio.h>
int main ()
{
    int m;
    printf ("Enter any number below 100:  ");
    scanf ("%d", &m);

    if (m<=100)
      {
        if (m>=90)
        {
            printf (" A+ ");
        }
        else if (m>=80)
        {
            printf (" B+ ");
        }
        else if (m>=70)
        {
            printf (" C+ ");
        }
        else if (m>=60)
        {
            printf (" D+ ");
        }
        else
        {
            printf ("Your are failed.");
        }
      }
    else
    {
        printf ("Invalid number");
    }

return 0;
}