//This program asks the required sixe of array to the user and displays the addresses of the allocated blocks

#include<stdio.h>
#include<conio.h>
//#include<alloc.h>//header file for memory management functions
#include<stdlib.h>//for using exit function

void main()
{
	int n,i;
	float *address; //Declartion of a pointer variable that points towards a float
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	address = (float*)calloc(n,sizeof(float));
	//Using calloc function to allocate memory for n number of float member
	//calloc returns a void pointer so we need to typecast it to a float pointer
	if(address==NULL)//to check whether the requested memory is allocated or not
	{
		printf("Memory can't be allocated.");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("\nAddress of %d block is %d",i,(address+i));
	}
	free(address);//to deallocate the memory 
}
