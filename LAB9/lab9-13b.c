//lab8-9b using dynamic emory allocation
//A program to calculate range of the elements of an array


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int size;
	float *arr,largest,smallest,range;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	arr = (float*)calloc(size, sizeof(float));
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%f",arr+i);

	largest = *arr;//1st element
    smallest = *arr;//1st element

    for(int i=0;i<size;i++)
    {
    	if(*(arr+i)>largest)
    		largest=*(arr+i);
    	if(*(arr+i)<smallest)
    		smallest=*(arr+i);
    }
    range = largest-smallest;
    printf("Range = %f",range);
    free(arr);
}
