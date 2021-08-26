//lab8-8 using dynamic memory allocation
//A program to read an unsigned int array and pass it to a function that counts the armstrong members and returns that count

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int power(int n, int  p)
{
	if(p==0)
		return 1;
	else
		return n * power(n, p-1);
}


int armstr(unsigned int *a, int s)
{
	int i=0,count=0;
	for(int i=0;i<s;i++)
	{
		int sum=0,rem,l=0;
		unsigned int store = *(a+i);//stores the value of currrent element of array

		while(*(a+i)!=0)//while the current element is not equal to 0
		{
			*(a+i) = *(a+i) / 10;
			l++; //l is the number of digits in the number
		}

		*(a+i) = store; //restoring the value of the current element

		while(*(a+i)!=0)
		{
			rem = *(a+i) % 10;
			sum += power(rem, l);
			*(a+i) = *(a+i) / 10;
		}

		if(sum == store)//criteria for being an armstrong's number
			count++;
	}
	return count;
}

int main()
{
	int size;
	unsigned int *arr;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&size);
	arr = (unsigned int*)calloc(size, sizeof(unsigned int));
	printf("Enter the elements of the array: \n");
	for(int i=0;i<size;i++)
		scanf("%u",arr+i);
	printf("The number of armstrong numbers is: %d", armstr(arr, size));
	free(arr);
}