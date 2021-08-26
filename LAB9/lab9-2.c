//Write a program to find the larger of two numbers using the concept of function and pointer.

#include<stdio.h>
#include<conio.h>

void largest(int *p, int *q, int *r);

void main()
{
	int a,b,l;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	largest(&a,&b,&l);
	printf("Larger one is %d",l);
	getch();
}

void largest(int *p,int *q,int *r)
{
	if(*p>*q)
		*r=*p;
	else
		*r=*q;
}