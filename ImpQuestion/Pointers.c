// WAP to add, subtract, multiply and divide two numbers using pointers. 

#include<stdio.h>
int main () {
    float a, b, *p1, *p2; 
    p1 = &a;
    p2 = &b;
    printf("Enter the two numbers:\n"); 
    scanf("%f %f", &a, &b);
   
    printf("Sum         = %.2f\n", *p1 + *p2);
    printf("Subtraction = %.2f\n", *p1 - *p2);
    printf("Product     = %.2f\n", *p1 * *p2);
    printf("Division    = %.2f\n", *p1 / *p2);
    return 0;
} 