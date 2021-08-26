//A program to find the largest and smallest element of an array using the concept of pointers and function

#include<stdio.h>
#include<conio.h>

void func(int a[20],int num,int *l,int *s)
{
	int i;
	*l=*a;
	*s=*a;
	for(i=0;i<num;i++)
	{
		if(*(a+i) > *l)
			*l=*(a+i);
		if(*(a+i) < *s)
			*s=*(a+i);
	}
}


void main()
{
	int n,i,arr[20],largest,smallest;
	printf("Enter the number of elements you want in the array: ");
	scanf("%d",&n);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",(arr+i)); //arr means the address of the first element of the array arr
	}
	printf("\nThe array is displayed below\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(arr+i)); //prints the value stored in the address (arr+1) 
	}
	func(arr,n,&largest,&smallest);
	printf("\nLargest value: %d   Smallest value: %d",largest,smallest);
	getch();
}