//Write a program that reads a string and rewrites in alphabetical order

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[200];
	char temp;
	int i=0,j=1;
	printf("Enter a string: ");
	gets(str);
	while(str[i]!='\0')
	{
		j=i+1;
		while(str[j]!='\0')
		{
			if(str[j] < str[i])
			{
				temp = str[i];
				str[i]=str[j];
				str[j]=temp;
			}
			j++;
		}
		i++;
	}
	printf("Rewritten : %s",str);
}