//A program to create a recursive function to calculate the sum from 0 to n

#include<stdio.h>
#include<conio.h>

int sum(float n)
{
	if(n!=(int)n)
		return 0;
	else if (n==0)
		return 0;
	else if(n<0)
		return n + sum(n+1);
	else
		return n+sum(n-1);
}

int main()
{
	float num;
	int result;
	printf("Enter a number: ");
	scanf("%f",&num);
	result = sum(num);
	if(result != 0)
		printf("\nThe sum from 0 to %.f is %d",num,result);
	else
		printf("\nSorry can't deal with float numbers.");
	return 0;
}