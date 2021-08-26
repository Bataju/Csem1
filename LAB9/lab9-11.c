//lab8-7 using dynamic memory allocation
//A program to raise the power of each element of an array by 3

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float power(float n, int  p)
{
	if(p==0)
		return 1;
	else
		return n * power(n, p-1);
}

void main()
{
	int size;
	float *array;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	array = (float*)calloc(size, sizeof(float));
	printf("Enter the elements of array: \n");
	for(int i=0;i<size;i++)
		scanf("%f",array+i);

	printf("The array is:\n");
	for(int i=0;i<size;i++)
		printf("%f\t",*(array+i));

	for(int i=0;i<size;i++)
	{
		array[i]=power(*(array+i),3);
	}
	printf("\nThe modified array is: \n");
	for(int i=0;i<size;i++)
		printf("%f\t",*(array+i));
	free(array);
}