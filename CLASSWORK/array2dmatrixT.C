//A program to create a function named transpose that returns the transpose of a matrix

#include<stdio.h>
#include<conio.h>

void transpose(float mat[][10],int row,int column)//need to specify the no. of columns for 2d array
{
	int i,j;
	float matx1[10][10];
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			matx1[i][j] = mat[j][i];
		}
	}
	printf("The matrix entered is: ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%f\t",mat[i][j]);
		}
		
	}

	printf("\nThe transposed matrix is: ");

	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%f\t",matx1[i][j]);
		}
		
	}
}

void main()
{
	float matx[10][10];
	int row,column,i,j;
	printf("Enter the size of the matrix row and column: ");
	scanf("%d%d",&row,&column);
	printf("Enter the elements of the matrix: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("matx[%d][%d] =",i,j);
		scanf("%f",&matx[i][j]);
		}
	}
	transpose(matx, row, column);
}