//A program to create recursive functions to evaluate sin(x) = x - x^3/3! + x^5/5! - ....

#include<stdio.h>
#include<conio.h>

float power(float x, int p)
{
	if(p==0)
		return 1;
	else
		return x * power(x, p-1);
}

int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n * fact(n-1);
}

int main()
{
	float x, sum=0,store_x;
	int n,i,sign=-1;
	printf("Enter the angle in degree to evaluate sin(x): ");
	scanf("%f",&x);
	store_x = x;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	x = (3.14 / 180) * x;
	for(i=1;i<=n;i++)
	{
		sign*=-1;
		sum+=sign * power(x,2*i-1) / fact(2*i-1);
	}
	printf("The value of sine(%f) is %f",store_x,sum);
	getch();
	return 0;
}