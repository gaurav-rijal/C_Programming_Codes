// Write a C program to find the sum of individual digits of a 3 digit number.

#include<stdio.h>
int main () {
    int n, digit, sum = 0 ;
    printf("Enter any three digit number: ");
    scanf("%d", &n);
    while ( n != 0)
    {
        digit = n % 10 ;
        sum += digit ;       // sum = sum + digit ;    
        n /= 10 ;            // n = n / 10 ;
    }
    printf("The sum of all digits is: %d.", sum);
    return 0;
}