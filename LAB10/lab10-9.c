//Write a program to find the frequency of characters in a string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	int i=0,j,count=1;
	printf("Enter a string: ");
	gets(str);
	while(str[i]!='\0')
	{
		j=i+1;
		count = 1;
		if(str[i] !=' ')//to not count the number of spaces
		{
			while(str[j]!='\0')
			{
				if(str[j]==str[i])
				{
					count++;
					str[j]=' '; //to not display the frrequency of same character twice once it is already displayed
				}
				j++;
			}
			printf("%c = %d\n",str[i], count);
		}
		i++;
	}
}