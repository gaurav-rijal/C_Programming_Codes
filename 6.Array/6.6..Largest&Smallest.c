// wap two input 10 array elements and display the largest and smallest number among them.

#include<stdio.h>
int main ()
{
    int a[10],i,small,large;
    printf("Enter any 10 numbers: \n");
    for (i=0; i<10; i++)
    {
        scanf(" %d",&a[i]);
    }
    small = a[0];
    large = a[0];
    for (i=1; i<10; i++)
    {
        if (small > a[i])
        {
            small = a[i];
        }    
        if (large < a[i])
        {
            large = a[i];
        }
    }    
    printf("The smallest value is %d. \n",small);
    printf("The largest value is %d.\n",large);
    return 0;

}