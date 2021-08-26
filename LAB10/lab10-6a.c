//Write a program that stimulates the task strlen suing user defined function

#include<stdio.h>
#include<conio.h>

int length_of_string(char *s);

void main()
{
	char str[200];
	printf("Enter a string: ");
	gets(str);
	printf("Length = %d", length_of_string(str));
	getch();
}

int length_of_string(char *s)
{
	int i=0;
	while(s[i]!='\0') //null terminator
		i++;
	return i;
}