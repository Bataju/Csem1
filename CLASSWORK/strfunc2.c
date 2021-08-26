// Create a function thattt counts the length of a string

#include<stdio.h>
#include<conio.h>

int length(char stri[])
{
	int i=0,len=0;
	while(stri[i] != '\0')
	{
		len++;
		i++;
	}
	return len;
}

void main()
{
	char str[200];
	printf("Enter a string: ");
	gets(str);
	printf("The length of the string is %d", length(str));
}
