// WAP TO FIND EVEN AND ODD NUMBERS USING IF CONDITION.

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter any number: ");
    scanf ("%d",&n);

    if (n%2==0)
       {
        printf ("Number is even.");
       }

    else
        {
            printf ("Number is odd.");
        }   

 return 0;
}