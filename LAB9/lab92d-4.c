//lab82d-4 using dynamic memory allocation
//A prograam to add the elements at to corresponding position of two arrays of size mXn

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int m,n,i,j;
	float **a,**b,**c;
	printf("Enter the number of rows and columns in the array: ");
	scanf("%d%d",&m,&n);

	a = (float**)calloc(m, sizeof(float*));
	for(i=0;i<m;i++)
		*(a+i) = (float*)calloc(n, sizeof(float));

	b = (float**)calloc(m, sizeof(float*));
	for(i=0;i<m;i++)
		*(b+i) = (float*)calloc(n, sizeof(float));

	c = (float**)calloc(m, sizeof(float*));
	for(i=0;i<m;i++)
		*(c+i) = (float*)calloc(n, sizeof(float));

	printf("\nEnter the elements of array 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",(*(a+i)+j));
		}
	}
	printf("\nEnter the elements of array 2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%f",(*(b+i)+j));
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j) = *(*(a+i)+j)  + *(*(b+i)+j);
		}
	}
	printf("\nThe result is:");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%f\t",*(*(c+i)+j));
		}
	}
	free(a);
	free(b);
	free(c);
}