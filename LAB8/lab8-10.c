//A program to read an array of size 10, create a function using pass by reference to find the largest and smallest number and their positions

#include<stdio.h>
#include<conio.h>

void func(float a[], float *l, float *s)//no need to pass the number of rows in 1d array while passing it to a function
{
	int position_of_l=0,position_of_s=0;
	*l = a[0];
	*s = a[0];
	for(int i=0;i<10;i++)
	{
		if(*(a+i) > *l)
		{
			*l = *(a+i);
			position_of_l = i;
		}
		if(*(a+i) < *s)
		{
			*s = *(a+i);
			position_of_s = i;
		}
	}
	printf("\nDisplayed from function");
	printf("\nLargest = %f\tPosition = %d\nSmallest = %f\tPosition = %d",*l,position_of_l+1,*s,position_of_s+1);
}

void main()
{
	float arr[10], largest, smallest;
	printf("Enter the elements of the array: \n");
	for(int i=0;i<10;i++)
		scanf("%f",&arr[i]);
	func(arr, &largest, &smallest);
	printf("\nDisplayed from main");
	printf("\nSum of largest and smallest = %f",largest + smallest);
	printf("\nDifference between largest and smallest = %f",largest - smallest);
}