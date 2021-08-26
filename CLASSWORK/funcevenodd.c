#include<stdio.h>
#include<conio.h>

void even_odd(int num,int* even,int* odd)
{
	int rem;
	while(num != 0)
	{
		rem = num % 10;
		if(rem!=0) //because 0 is neither odd nor even
		{
		if(rem % 2 == 0)
			*even=*even + 1;
		else
			*odd=*odd + 1;
		}
		num = num/10;
	}
}

void main()
{
	int n,even=0,odd=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	even_odd(n, &even, &odd);
	printf("even: %d",even);
	printf("\nodd: %d",odd);
}