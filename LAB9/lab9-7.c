//lab8-3 using dynamic memory allocation
//A program to find the sum of elements of an integer array of size 5 that are divisible by 10 but not by 15

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,sum=0,*ptr;
	ptr = (int *)calloc(5, sizeof(int));
	printf("Enter the elements of array: ");
	for(i=0;i<5;i++)
		scanf("%d",ptr+i);
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)%10==0 && *(ptr+i)%15!=0)
			sum+=*(ptr+i);
	}
	printf("Sum of elements divisible by 10 but not by 15: %d",sum);
	free(ptr);
	getch();
}