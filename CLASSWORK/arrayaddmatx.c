//A program to create a function to add two matrices

#include<stdio.h>
#include<conio.h>

void add_matx(float A[][10], float B[][10], int row1,int col1, int row2, int col2)
{
	int i,j;
	float newmatx[10][10];
	if(row1==row2 && col1==col2)
	{
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				newmatx[i][j] = A[i][j] + B[i][j];
			}
		}
		printf("The addition of the matrices yields: ");
		for(i=0;i<row1;i++)
		{
			printf("\n");
			for(j=0;j<col1;j++)
			{
				printf("%f\t",newmatx[i][j]);
			}
		}
	}
	else
		printf("Matrix addition is not possible.");
}

void main()
{
	float A[10][10],B[10][10];
	int i,j,row1,col1,row2,col2;
	printf("Enter the number of rows and columns in matrix A: ");
	scanf("%d%d",&row1,&col1);
	printf("Enter the number of rows and columns in matrix B: ");
	scanf("%d%d",&row2,&col2);
	printf("Enter the elements of the matrix A: ");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("A[%d][%d] =",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter the elements of the matrix B: ");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("B[%d][%d] =",i,j);
			scanf("%f",&B[i][j]);
		}
	}
	 add_matx(A, B, row1, col1, row2, col2);
}
