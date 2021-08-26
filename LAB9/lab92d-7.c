//lab82d-7 using dynamic memory allocation
//A program to raise the power of each element of an array by 5

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,m,n;
	float **a;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);

	a = (float**)calloc(m, sizeof(float*));
	for(i=0;i<m;i++)
		*(a+i) = (float*)calloc(n, sizeof(float));

	printf("Enter the elements of the array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",(*(a+i)+j));
		}
	}

	printf("The initial array:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",*(*(a+i)+j));
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			float temp = *(*(a+i)+j);
			for(int k=1;k<5;k++)
				*(*(a+i)+j) *= temp;
		}
	}

	printf("\nThe modified array:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",*(*(a+i)+j));
		}
	}
	free(a);
}