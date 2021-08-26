//A program to find the sum of individual rows of a 2D array and assign them to a 1D array and display

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,m,n;
	float a[10][10], b[10];

	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);

	printf("Enter the elements of the array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",&a[i][j]);
		}
	}

	printf("The 2D array:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",a[i][j]);
		}
	}


	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n;j++)
		{
			b[i]+=a[i][j];
		}
	}

	printf("\nThe 1D array:\n");
	for(i=0;i<m;i++)
		printf("%f\n",b[i]);
}