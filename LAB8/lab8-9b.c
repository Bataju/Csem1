//A program to calculate range of the elements of an array

#include<stdio.h>
#include<conio.h>

void main()
{
	int size;
	float arr[50],largest,smallest,range;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%f",&arr[i]);

	largest = arr[0];
    smallest = arr[0];
    for(int i=0;i<size;i++)
    {
    	if(arr[i]>largest)
    		largest=arr[i];
    	if(arr[i]<smallest)
    		smallest=arr[i];
    }
    range = largest-smallest;
    printf("Range = %f",range);
}
