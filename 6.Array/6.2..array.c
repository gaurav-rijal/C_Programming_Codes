// WAP to display 5 elements using array WITH LOPP.

#include<stdio.h>
int main ()
{
    int a[5],i;
    printf("Enter 5 array elements: \n");
     for (i=0; i<5; i++)
      {
        scanf(" %d",&a[i]);
      }

    printf("\nThe array elements are:\n");
    for (i=0; i<5; i++)
      {
        printf(" %d \t",a[i]);
      }

 return 0;
}