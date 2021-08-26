//A program to use string handling functions

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[200];
	int length;
	printf("Enter a string: ");
	gets(str);
	length = strlen(str);
	printf("The length of the entered string is %d",length);
}