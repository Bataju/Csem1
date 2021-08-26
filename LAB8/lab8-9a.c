//A program to calculate the median of the elements of an array

#include<stdio.h>
#include<conio.h>

void ascend(float a[], int s)
{
	float temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i;j<s;j++)
		{
			if(a[j] < a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}


void main()
{
	int size;
	float term, median, arr[50];
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%f",&arr[i]);
	ascend(arr, size);

	term = (float)(size + 1) / 2;

	if(term == (int)term)
		median = arr[(int)term-1];

	else
		median = arr[(int)term-1] + (term - (int)term) * (arr[(int)term] - arr[(int)term -1]);
	
	printf("\nMedian = %f", median);
}

/*1 2 3 4 5 6
term = (6+1)/2=3.5
median = 3 + 0.5 / (4-3) i.e 3rd term + (3.5-3) * (4th term - 3rd term)
*/
