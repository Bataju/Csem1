//lab8-1 using dynamic memory allocation
//A program to demonstrate arrays

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *address;
	address = (int *)calloc(6, sizeof(int));
	if(address==NULL)//to check whether the requested memory is allocated or not
	{
		printf("Memory can't be allocated.");
		exit(0);
	}
	*address = 4;
	*(address+1) = 5;
	*(address+2) = 3;
	*(address+3) = 2;
	*(address+4) = 1;
	*(address+5) = 5;
	for(int i=0;i<6;i++)
		printf("%d\t",*(address+i));
	getch();
	free(address);
}