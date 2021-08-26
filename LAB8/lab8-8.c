//A program to read an unsigned int array and pass it to a function that counts the armstrong members and returns that count

#include<stdio.h>
#include<conio.h>

int power(int n, int  p)
{
	if(p==0)
		return 1;
	else
		return n * power(n, p-1);
}

int armstr(unsigned int a[], int s)
{
	int i=0,count=0;
	for(int i=0;i<s;i++)
	{
		int sum=0,rem,l=0;
		unsigned int store=a[i];

		while(a[i]!=0)
		{
			a[i] = a[i] / 10;
			l++; //l is the number of digits in the number
		}

		a[i] = store;
		while(a[i]!=0)
		{
			rem = a[i] % 10;
			sum += power(rem, l);
			a[i] = a[i] / 10;
		}

		if(sum == store)
			count++;
	}
	return count;
}

int main()
{
	int size;
	unsigned int arr[50];
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%u",&arr[i]);
	printf("The number of armstrong numbers is: %d", armstr(arr, size));
}