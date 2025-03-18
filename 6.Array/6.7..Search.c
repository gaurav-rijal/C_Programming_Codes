/* Wap to input 10 array elements and search any number input from users is available in the given array or
not */

#include<stdio.h>
int main()
{
    int a[10],i,n,flag=0;
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
           flag = 1;
            break;
        }
        else 
        {
            flag = 0;
        }    
    }
    
    if (flag == 1)
    {
        printf("\nThe number %d is found in the array at index %d.",n,i);
    }
    else 
    {
       printf("\nThe number %d is not found in the array.",n); 
    }
return 0;
} 
 
