//Write a program to read a string in main, pass it to a function that couunts the number of words and returns it to main. Display the count from main.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int count(char s[]);

void main()
{
	char str[200];
	printf("Enter a string: ");
	gets(str);
	printf("The number of words in the entered string is %d",count(str));
	getch();
}

int count(char s[])
{
	int counter=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
			counter++;
	}
	return counter+1;
}