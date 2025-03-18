// Wap to input 10 numbers and sort them in descending order using array.
   
#include<stdio.h>
int main ()
{
    int a[4],i,j,temp;
    printf("Enter any 4 array elements: \n");
    for (i=0; i<4; i++)
    {
       scanf(" %d",&a[i]);
    }
    for (i=0; i<4; i++)
    {
        for (j=i+1; j<4; j++)
        {
           if ( a[i] < a[j])
           { 
              temp = a[i];
              a[i] = a[j];
              a[j] = temp;
           }
        }
    }
    printf("The desending order is: \n");
    for (i=0; i<4; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}