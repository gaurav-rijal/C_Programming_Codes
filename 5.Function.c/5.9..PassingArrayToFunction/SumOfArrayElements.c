// WAP A PROGRAM TO DISPLAY THE SUM OF ANY 10 ARRAY ELEMENTS USING FUNVTION.
#include<stdio.h>
void sum(int a[]);
int main()
{
    int a[10],i;
    printf("Enter any 10 array elements: \n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}

void sum(int a[])
{
    int i,s=0;
     for (i=0; i<10; i++)
    {
        s = s + a[i];
    }
    printf("\nThe sum of 10 array elements is %d.",s);
}