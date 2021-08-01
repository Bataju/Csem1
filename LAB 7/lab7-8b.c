//A program to create a recursive function to calculate x^n

#include<stdio.h>
#include<conio.h>

double power(float x,int n)
{
	if(n<0)
		return 1/x*power(x,n+1);
	else if(n==0)
		return 1;
	else
		return x*power(x,n-1);
}

int main()
{
	float x;
	int n;
	printf("Enter a number: ");
	scanf("%f",&x);
	printf("\nEnter an integer power: ");
	scanf("%d",&n);
	printf("\nThe value of %f raised to %d is %lf",x,n,power(x,n));
	return 0;
}