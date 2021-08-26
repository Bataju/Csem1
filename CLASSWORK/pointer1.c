//POINTER BASICS


#include<stdio.h>
#include<conio.h>

void main()
{
	int *p,*q,a,b;
	p = &a;
	q = &b;
	printf("Address of a: %u\n",&a);
	printf("Address of b: %u\n",&b);
	printf("Value of p: %u\n",p);
	printf("Value of q: %u\n",q);
	printf("Ehter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nThe value pointed by p is %d",*p);
	printf("\nThe value pointed by q is %d",*q);
	printf("\na+b=%d",*p+*q);
	getch();
}