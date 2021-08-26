//lab82d-2 using dynamic memory allocation
//Read the elements of a 3X3 array and display

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,**num;
	num = (int**)calloc(3, sizeof(int*));
	for(i=0;i<3;i++)
		*(num+i) = (int*)calloc(3, sizeof(int));

	printf("Enter members of array: ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",(*(num+i)+j));
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",*(*(num+i)+j));
	}
	free(num);
	getch();
}