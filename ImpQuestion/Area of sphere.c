/* 1. Write a C program to find the area and volume of sphere and display the results.
 Formulas are:-  Area = 4*PI*R*R Volume = 4/3*PI*R*R*R.
                 Note : Assume PI = 3.14 and take the value of R from user */

#include<stdio.h>
# define PI 3.14
int main() {
    float R,a,v;
    printf("Enter the radius of sphere: ");
    scanf("%f", &R);
    a = 4 * PI * R * R ;
    v = (4/3) * PI * R * R * R ;
    printf("The area of sphere and the volume is %.2f and %.2f respectively.",a,v);
    return 0;    
}