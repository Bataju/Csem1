//A prograam to add the elements at to corresponding position of two arrays of size mXn

#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,i,j;
	float a[10][10],b[10][10],c[10][10];
	printf("Enter the number of rows and columns in the array: ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of array 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEnter the elements of array 2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nThe result is:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",c[i][j]);
		}
	}
}