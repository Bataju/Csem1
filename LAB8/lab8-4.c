//A program to add the elements at corresponding position of two arrays of size n

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,arr1[100],arr2[100],arr3[100];
	printf("Enter the size of arrays: ");
	scanf("%d",&n);
	printf("Enter the elements of first array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the elements of second array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<n;i++)
		arr3[i] = arr1[i] + arr2[i];
	printf("The array formed by adding consecutive elements is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr3[i]);
	getch();
}