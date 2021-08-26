//A program that reads a string character until user presses an enter key

#include<stdio.h>
#include<conio.h>

void main()
{
	int i= 0;
	char ch,str[100];
	printf("Enter a string:");
	do
	{
		ch = getchar();
		str[i] = ch;
		i++;
	}while(ch != '\n');
	str[i-1]='\0';
	printf("The entered string is %s",str);
}