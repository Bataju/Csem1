//lab8-2 using dynamic memory allocation
//A program to read an array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *ptr;
	ptr = (int*)calloc(6, sizeof(int));//6 members
	printf("Enter the members of the array:");
	for(int i=0;i<6;i++)
		scanf("%d",ptr+i);
	for(int i=0;i<6;i++)
		printf("%d",*(ptr+i));
	free(ptr);
	getch();
}