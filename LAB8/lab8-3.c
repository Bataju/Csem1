//A program to find the sum of elements of an integer array of size 5 that are divisible by 10 but not by 15

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[5],sum=0;
	printf("Enter the elements of array: ");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	{
		if(arr[i]%10==0 && arr[i]%15!=0)
			sum+=arr[i];
	}
	printf("Sum: %d",sum);
}