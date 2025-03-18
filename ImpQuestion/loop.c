 //Write a C program to print the first `n` natural numbers, their sum, and their average.

 
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    float average;
    printf("Enter number: ");
    scanf("%d", &n);
    if ( n < 1)
    {
        printf("Note: Enter natural number.");
    }
    else 
    {
        printf("The frist %d natural numbers are:\n", n);
        for (i=1; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        average = sum / n;
        printf("\nSum is %d.", sum);
        printf("\nAverage is %.2f.", average);
    }
    return 0;
}