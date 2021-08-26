//A program to read an array

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num[6];
	printf("Enter the members of the array:");
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	for(i=0;i<6;i++)
		printf("%d",num[i]);
	getch();
}