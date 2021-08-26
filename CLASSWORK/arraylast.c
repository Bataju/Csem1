//A program to read two matrices using a function read_matrix pass it to a function named process_matrix which performs matrix multiplication

#include<stdio.h>
#include<conio.h>

void display_matrix(float C[][10], int m, int n)
{
	int i,j;
	printf("The result of A X B is: ");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",C[i][j]);
		}
	}
}


void process_matrix(float A[][10], float B[][10], int row1, int col1,int row2,int col2)
{
	int i,j,k;
	float result[10][10];//array is initialised with zero
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			for(k=0;k<col1;k++)
			{
				result[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	display_matrix(result, row1, col2);
}


void read_matrix()
{
	float A[10][10],B[10][10];
	int i,j,row1,col1,row2,col2;
	printf("Enter the number of rows and columns in matrix A: ");
	scanf("%d%d",&row1,&col1);
	printf("Enter the number of rows and columns in matrix B: ");
	scanf("%d%d",&row2,&col2);
	if(col1 != row2)
		printf("The two given matrices cannot be multiplied.");
	else
	{
	printf("Enter the elements of the matrix A: \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("A[%d][%d] =",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter the elements of the matrix B: \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("B[%d][%d] =",i,j);
			scanf("%f",&B[i][j]);
		}
	}
	process_matrix(A,B,row1,col1,row2,col2);
    }
}


void main()
{
	read_matrix();
}