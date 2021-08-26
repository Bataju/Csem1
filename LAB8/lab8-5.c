//A program to find the highest and lowest element of array of size 5

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[5],lowest,largest;
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
}