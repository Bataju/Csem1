//Write a program that checks whether a given string is palindrome or not.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j=0;
	char str[100],new[100];
	printf("Enter a string: ");
	gets(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		new[j] = str[i];
		j++;
	}
	new[j]='\0';
	if(strcmp(str,new)==0)
		printf("YES! It is a palindrome.");
	else
		printf("NO! It is not a palindrome.");
}