//A program to generate a matrix of size 4X4 whose elements are given by aij=3^-(i+j)

#include<stdio.h>
#include<conio.h>

float power(int n, int p)
{
	if(p==0)
		return 1;
	else
		return (((float)1/n) * power(n, p+1));
}

void main()
{
	float m[4][4];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			m[i][j] = power(3 , -(i+j));
		}
	}

	printf("The matrix is");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			printf("%f\t",m[i][j]);
		}
	}
}