//pointer and function largest of two numbers

#include<stdio.h>
#include<conio.h>

void largest(int *p,int *q,int *l)
{
	if(*p>*q)
		*l=*p;
	else
		*l=*q;
}

void main()
{
	int a,b,large;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	largest(&a,&b,&large);
	printf("Largest is: %u",large);
}