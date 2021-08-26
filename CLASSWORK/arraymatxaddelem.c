//A program to create a return tyoe function which adds all the elements of a matrix

#include<stdio.h>
#include<conio.h>

float add_elem(float matx[][10],int m,int n)
{
	float sum=0;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum += matx[i][j];
		}
	}
	return sum;
}

void main()
{
	float mat[10][10];
	int i,j,m,n;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of the matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("mat[%d][%d] =",i,j);
			scanf("%f",&mat[i][j]);
		}
	}
	printf("The sum of the elements : %f",add_elem(mat,m,n));
}