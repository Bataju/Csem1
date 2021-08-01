//A program to create separate functions to find highest and lowest among three numbers 

#include<stdio.h>
#include<conio.h>

int findLowest(int n1,int n2,int n3)
{
	int lowest = n1<n2?(n1<n3?n1:n3):(n2<n3?n2:n3);
	return lowest;
}

int findHighest(int n1,int n2,int n3)
{
	int highest = n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
	return highest;
}

int main()
{
	int num1,num2,num3;
	printf("Enter any three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("\nThe highest number is %d",findHighest(num1,num2,num3));
	printf("\nThe lowest number is %d",findLowest(num1,num2,num3));
	getch();
	return 0;
}