/* Write a program to evaluate the area of triangle with 3 sides given and display 
the result (take the value of sides from user as input).
[Hints: area=sqrt(s(s-a)(s-b)(s-c)) where a,b,c are the sides of the triangle and 
s=(a+b+c)/2]  */

#include <stdio.h>
#include <math.h>
int main () {
    float area,b,c,a,s;
    printf("Enter the length of three sides of tringle: \n");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2 ;
    area = sqrt (s * (s-a) * (s-b) * (s-c) );
    printf("The area of tringle is %.2f.", area);
    return 0;
}