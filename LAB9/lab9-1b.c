//Run the following output and observe the output

#include<stdio.h>
#include<conio.h>

void main()
{
	int *p,*q; //Declaration of pointer variables
	int a,b; //Declaration of ordinary variables
	p=&a;
	q=&b;
	printf("Address of a=%u\n",&a);
	printf("Address of b=%u\n",&b);
	printf("Value of p=%u\n",p);
	printf("Value of q=%u\n",q);
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("The value pointed by p is %d\n",*p); //Using dereferencing operator
	printf("The value pointed by q is %d\n",*q);
	printf("a+b=%d\n",a+b);
	printf("*p+*q=%d",*p + *q); //*p+*q->pointer expression
	getch();
}
