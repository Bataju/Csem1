//lab8-4 using dynamic memory allocation
//A program to add the elements at corresponding position of two arrays of size n

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,*ptr1,*ptr2,*ptr3;
	printf("Enter the size of arrays: ");
	scanf("%d",&n);
	ptr1 = (int*)calloc(n, sizeof(int));
	ptr2 = (int*)calloc(n, sizeof(int));
	ptr3 = (int*)calloc(n, sizeof(int));
	printf("Enter the elements of first array: ");
	for(i=0;i<n;i++)
		scanf("%d",ptr1+i);
	printf("Enter the elements of second array: ");
	for(i=0;i<n;i++)
		scanf("%d",ptr2+i);
	for(i=0;i<n;i++)
		*(ptr3+i) = *(ptr1+i) + *(ptr2+i);
	printf("The array formed by adding consecutive elements is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(ptr3+i));
	free(ptr1);
	free(ptr2);
	free(ptr3);
	getch();
}