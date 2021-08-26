//lab82d-5 using dynamic memory allocation
//A program to find the highest and lowest element of array of size 3X3

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	float **a,highest,lowest;
	int i,j;

	a = (float**)calloc(3, sizeof(float*));
	for(i=0;i<3;i++)
		*(a+i) = (float*)calloc(3, sizeof(float));

	printf("Enter the elements of the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",(*(a+i)+j));
		}
	}
	highest = *(*(a+0)+0);
	lowest = *(*(a+0)+0);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(*(*(a+i)+j) > highest)
				highest = *(*(a+i)+j);
			if(*(*(a+i)+j) < lowest)
				lowest = *(*(a+i)+j);
		}
	}
	printf("\nHighest = %f\nLowest = %f",highest,lowest);
	free(a);
}