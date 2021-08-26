//lab8-5 using dynamic memory allocation
//A program to find the highest and lowest element of array of size 5

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,lowest,largest,*arr;
	arr = (int*)calloc(5, sizeof(int));
	printf("Enter the elements of array: ");
	for(i=0;i<5;i++)
		scanf("%d",arr+i);
	largest = *arr;
	lowest = *arr;
	for(i=1;i<5;i++)
	{
		if(*(arr+i) > largest)
			largest = *(arr+i);
		if(*(arr+i) < lowest)
			lowest = *(arr+i);
	}
	printf("\nThe largest element is %d.",largest);
	printf("\nThe lowest element is %d.",lowest);
	free(arr);
}