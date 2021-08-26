//lab82d-1 using dynamic memory allocation
//Observe the output

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int i,j,**num; //double integer pointer

	num = (int**)calloc(2, sizeof(int*)); //size of pointer, 2->number of elements in the larger array

	for(i=0;i<2;i++) //for the nested portion, 2->number of elements in the smaller array
	{
		*(num+i) = (int*)calloc(2, sizeof(int));
	}

	//pointer notation for accessing elements of a 2d array
	/* *(num+0) returns address of 1st array nested in the larger array
	   *(num+0)+0 gives address of the 1st element of the 1st array
	   *(num+0)+1 gives address of the 2nd element of the 1st array
	   *(num+1) returns address of 2nd array nested in the larger array
	   *(num+1)+0 gives address of the 1st element of the 2nd array
	   *(num+1)+1 gives address of the 2nd element of the 2nd array
	   dereferencing them for eg *(*(num+0)+0) gives the value stored in the address
	 */
	*(*(num+0)+0)=4;
	*(*(num+0)+1)=5;
	*(*(num+1)+0)=6;
	*(*(num+1)+1)=7;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",*(*(num+i)+j));
	}
	free(num);
	getch();
}