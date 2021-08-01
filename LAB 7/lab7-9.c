//A program to evaluate the series 1^2-2^2+3^2-4^2+.....

#include<stdio.h>
#include<conio.h>

int series(float n)
{
	if(n!=(int)n || n<0)
		return -1;
	else
	{
		if(n==0)
			return 0;
		else 
		{
			if((int)n % 2 == 0)
				return -1*n*n+series(n-1);
			else
				return n*n+series(n-1);
		}
	}
}

void main()
{
	float num;
	int result;
	printf("Enter the value of n: ");
	scanf("%f",&num);
	result=series(num);
	if(result==-1)
		printf("Enter a positive integer.");
	else
		printf("%d",series(num));
}