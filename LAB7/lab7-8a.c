//A program to create a recursive function to calculate the factorial of a number

#include<stdio.h>
#include<conio.h>

long long int fact(float n)
{
	if(n<0 || n!=(int)n )
		return 0;
    else
    {
    	if(n==0)
			return 1;
		else
			return n*fact(n-1);
    }
}

int main()
{
	float num;
	printf("Enter a number: ");
	scanf("%f",&num);
	if(fact(num)==0)
		printf("\nFactorial of %f cannot be calculated",num);
	else
		printf("\nFactorial of %.f is %lld",num,fact(num));
}