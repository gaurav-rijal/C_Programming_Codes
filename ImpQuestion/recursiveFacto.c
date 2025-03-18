//Write a C program to find the factorial of a given number using recursion.

#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	printf("the factorial of %d is %d",n,fact(n));
	return 0;
}
int fact(int n)
{
	if (n==0)
	return 1;
	else
	return n*fact(n-1);
}