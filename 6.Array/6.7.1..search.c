/* Wap to input 10 array elements and search any number input from users is available in the given array or
not */

#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter any 10 numbers: \n");
    for (i=0; i<10; i++)
    {
        scanf(" %d",&a[i]);
    }
    printf("\nEnter any number to search: ");
    scanf(" %d",&n);
    for (i=0; i<10; i++)
    {
        if (n == a[i])
        {
           printf("\nThe number is found in the array at index.");
            break;
        }
        else 
        {
           printf("\nThe number is not found in the array.");
           break;
        }    
    }
    
   /* if (flag == 1)
    {
        printf("\nThe number %d is flag in the array at index %d.",n,i);
    }
    else 
    {
       printf("\nThe number %d is not flag in the array.",n); 
    }
    */
return 0;
} 
 
