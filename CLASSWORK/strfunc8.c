//Illustrate strrev

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);
	strrev(str);
	printf("The reversed string is %s.",str);
}