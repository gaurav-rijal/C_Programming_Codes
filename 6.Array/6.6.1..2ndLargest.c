// WAP to find the 2nd largest number in the array.
#include<stdio.h>
int main ()
{
    int a[10],i,j,temp;
    printf("Enter any 10 array elements: \n");
    for (i=0; i<10; i++)
    {
       scanf(" %d",&a[i]);
    }
    for (i=0; i<10; i++)
    {
        for (j=i+1; j<10; j++)
        {
           if ( a[i] < a[j])
           { 
              temp = a[i];
              a[i] = a[j];
              a[j] = temp;
           }
        }
    }

    /* printf("The desending order is: \n");
    for (i=0; i<10; i++)
    {
        printf(" %d",a[i]);
    } */
    printf("The 2nd largest number is %d.", a[1]);
    return 0;
}