//lab8-9c using dynamic memory allocation
//A program calculate the variance of the elements of an array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int size;
	float *arr,sum_of_sq=0,sum_of_num=0,var;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	arr = (float*)calloc(size, sizeof(float));
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%f",arr+i);

	for(int i=0;i<size;i++)
	{
		sum_of_num += *(arr+i);
		sum_of_sq += ((*(arr+i))*(*(arr+i)));
	}
	var = (sum_of_sq/size) - ((sum_of_num/size)*(sum_of_num/size));
	printf("Variance = %f",var);
	free(arr);
}