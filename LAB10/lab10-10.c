//Write a program to read a string in main and pass it to a function that converts all the uppercase letters to lowercase and viceversa.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void convert(char *s);

void main()
{
	char str[200];
	printf("Enter a string: ");
	gets(str);
	convert(str);
	printf("Converted string: %s", str);
	getch();
}

void convert(char *s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=97 && s[i]<(97+26)) //lowercase
		{
			s[i] = s[i] - 32; //32 is the difference between corresponding uppercase and lowercase characters
		}
		else if(s[i]>=65 && s[i]<(65+26))//uppercase
		{
			s[i] = s[i] + 32; //changing to lowercase
		}
		else
			s[i] = s[i]; //for space
		i++;
	}
}
