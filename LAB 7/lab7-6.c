//A program to create a function that counts the number of even and odd digits in a number using pass by reference

#include<stdio.h>
#include<conio.h>

void countDigits(int* n)
{
	int store_n = *n,rem,even_count=0,odd_count=0;
	while(store_n!=0)
	{
		rem=store_n%10;
		if(rem%2==0)
			even_count++;
		else
			odd_count++;
		store_n=store_n/10;
	}
	printf("\nThe number of even digits is %d",even_count);
	printf("\nThe number of odd digits is %d",odd_count);
}

int main()
{
	unsigned int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	countDigits(&num);
	getch();
	return 0;
}