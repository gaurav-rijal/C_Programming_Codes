// WAP to input 10 any elements and display their sum.

#include<stdio.h>
int main ()
{
    int a[10],i,sum=0;
    printf("enter any 10 elements:\n");
    for (i=0; i<10; i++)
       {
        scanf(" %d",&a[i]);
       }

    for(i=0; i<10; i++)
       {
        sum += a[i];
       }
    printf("Total sum is %d.",sum);


return 0;
}