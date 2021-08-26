#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i;
	printf("Enter the elemrnts of array: ");
	for(i=0;i<4;i++)
		scanf("%d",a+i);
	for(i=0;i<4;i++)
		printf("%d ",*(a+i));
	getch();
}