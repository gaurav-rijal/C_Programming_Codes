/* WAP TO PROGRAM TO DISPLAY ADD, SUBTRACT, MULTIPLY & DIVIDE OF TWO WHOLE NUMBERS */

#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;

    printf("Enter Two numbers:\n");
    scanf("%d%d",&a,&b);

    printf("\nSum of %d and %d is: %d\n", a,b,c=a+b);          // Sum
    printf("Subtract: %d\n", d=a-b);                           // Subtraction
    printf("Multiply: %d\n", e=a*b);                           // Multiply
    printf("Divide: %.2f\n", f=a/b);                           // Divide

return 0;
}