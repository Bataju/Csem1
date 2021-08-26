//A program that reads 2 matrices of any order using function readMatrix, multiplies them using function processMatrix and displays the result using function showMatrix

#include<stdio.h>
#include<conio.h>

void readMatrix(float a[][10], float b[][10], int,int,int,int);

void processMatrix(float a[][10], float b[][10], float c[][10], int,int,int,int);

void showMatrix(float c[][10],int,int);

void main()
{
	int m,n,p,q;
	float A[10][10], B[10][10], C[10][10];
	printf("Enter the number of rows and columns in matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter the number of rows and columns in matrix B:");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		readMatrix(A, B, m, n, p, q);
		processMatrix(A, B, C, m, n, p, q);
		showMatrix(C, m, q);
    }
    else
    	printf("The matrices of given orders can't be multiplied.");
}

void readMatrix(float a[][10], float b[][10],int m,int n,int p,int q)
{
	printf("Enter matrix A:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter matrix B:\n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("B[%d][%d] = ",i,j);
			scanf("%f",&b[i][j]);
		}
	}
}

void processMatrix(float a[][10], float b[][10], float c[][10], int m,int n,int p, int q)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			c[i][j] = 0;
			for(int k=0;k<n;k++)
			{
				c[i][j] += (a[i][k] * b[k][j]);
			}
		}
	}
} 

void showMatrix(float c[][10], int m, int q)
{
	printf("A x B yields");
	for(int i=0;i<m;i++)
	{
		printf("\n");
		for(int j=0;j<q;j++)
			printf("%f\t",c[i][j]);
	}
}