//A program to create a recursive function to calculate hcf of two numbers

#include<stdio.h>
#include<conio.h>

int hcf(float n1,float n2,float n3)
{
	if(n1!=(int)n1 || n2!=(int)n2)
		return 0;
	else if((int)n3==1)
		return 1;
	else
	{
		if((int)n1%(int)n3==0 && (int)n2%(int)n3==0)
			return n3*hcf(n1,n2,n3-1);
		else
			return hcf(n1,n2,n3-1);
	}
}

int main()
{
	float n1,n2;
	int result;
	printf("Enter any two numbers: ");
	scanf("%f%f",&n1,&n2);
	result = hcf(n1,n2,n1<n2?n1:n2);
	if(result==0)
		printf("\nSorry I'm unable to calculate hcf of floats.");
	else
		printf("\nHCF of %.f and %.f is %d",n1,n2,result);
	return 0;
}

//without using recursive
// int low = n1<n2?n1:n2;
// 		for(int i=2;i<=low;i++)
// 		{
// 			if((int)n1%i==0 && (int)n2%i==0)
// 				hcf*=i;
// 		}