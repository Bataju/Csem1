//A program to find the sum of elements of an integer array of size 3*3 that are divisible by 7 but not by 5

#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3][3],i,j,sum=0;
	printf("Enter the elements of array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				if(arr[i][j]%7==0 && arr[i][j]%5!=0)
					sum += arr[i][j];
			}
	}
	printf("Sum of elements divisible by 7 and not by 5 = %d",sum);
	getch();
}