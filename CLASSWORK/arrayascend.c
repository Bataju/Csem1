//A program to sort the elements of an array in ascending order

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[100],size,i,j,temp;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	printf("Enter the elements of the array\n");
	for(i=0;i<size;i++)
	{
		printf("num[%d]",i);
		scanf("%d",&num[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[j]<num[i])
				{
					temp = num[i];
					num[i]=num[j];
					num[j]=temp;
				}
		}
	}
	printf("Sorted array is: ");
	for(i=0;i<size;i++)
	{
		printf("\nnum[%d]=%d",i,num[i]);
	}
}