//lab8-6 using dynamic memory allocation
//A program to read an array and create a function that sorts it in ascending or descending order

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void ascend(float *arr,int size)
{
	int i,j;
	float temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(arr+j)< *(arr+i))
			{
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
}

void descend(float *arr,int size)
{
	int i,j;
	float temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(arr+j)>*(arr+i))
			{
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
}

void main()
{
	int i,n;
	float *array;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	array = (float*)calloc(n, sizeof(float));

	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
		scanf("%f",array+i);
	ascend(array,n);
	printf("The elements in ascending order: \n");
	for(i=0;i<n;i++)
		printf("%.2f\t",*(array+i));
	descend(array,n);
	printf("\nThe elements in descending order: \n");
	for(i=0;i<n;i++)
		printf("%.2f\t",*(array+i));
	free(array);
}