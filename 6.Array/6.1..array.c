// WAP to display 5 elements using array (Without Loop).

#include<stdio.h>
int main()
{
    int a[5];                       

    printf("Enter 5 array elements: \n");
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&a[4]);

    printf("\nAll array elements are: \n");
    printf("%d\t",a[0]);
    printf("%d\t",a[1]);
    printf("%d\t",a[2]);
    printf("%d\t",a[3]);
    printf("%d\t",a[4]);   

  return 0;
}