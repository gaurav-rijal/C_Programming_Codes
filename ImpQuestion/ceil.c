//Write a C program to find the floor and ceiling of a given floating-point number.

#include <stdio.h>
#include <math.h>

int main() {
    float val, fVal, cVal;

    printf("Enter a floating value: ");
    scanf("%f", &val);

    fVal = floor(val);
    cVal = ceil(val);

    printf("Floor value: %f \n", fVal);
    printf ("Ceiling value: %f ", cVal);
    return 0;
}