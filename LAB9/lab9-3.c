//Run the following program and observe the output

#include<stdio.h>
#include<conio.h>

void main()
{
	float marks[5];
	int i;
	printf("%d",marks);//array itself is the address of the first element of the array
	//array is a pointer per se
	printf("\nAddress of different array elements:\n");
	for(i=0;i<5;i++)
	{
		printf("Address of element %d is %u\n",i,&marks[i]);
	}
	printf("Another way to achieve the same thing: \n");
	for(i=0;i<5;i++)
	{
		printf("Address of element %d is %u\n",i,marks+i);
	}
	getch();
}