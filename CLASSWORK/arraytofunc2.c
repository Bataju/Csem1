//A program to create a function that sorts the elements of an array in ascending order

#include<stdio.h>
#include<conio.h>

void sort(int n,int num[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[j]>num[i])
				{
					temp = num[i];
					num[i]=num[j];
					num[j]=temp;
				}
		}
	}
}

void display(int n,int num[])
{
	int i;
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}
}

void main()
{
	int num[100],size,i;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	printf("Enter the elements of the array\n");
	for(i=0;i<size;i++)
	{
		printf("num[%d]",i);
		scanf("%d",&num[i]);
	}
	sort(size,num);
	display(size,num);
}