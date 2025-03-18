 // Write a program to swap two variables values with or without using third Variable.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbres: \n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d and b = %d", a, b);
    return 0;
}
