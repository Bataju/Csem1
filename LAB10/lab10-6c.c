//Write a program to simulate strcpy() using user defined function

#include<stdio.h>
#include<conio.h>

void copy_string(char *s1, char *s2);

void main()
{
	char str1[200], str2[200];
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	copy_string(str1, str2);
	printf("Copied string: %s",str1);
}

void copy_string(char *s1, char *s2)
{
	int i=0;
	while(s2[i] != '\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i] = '\0';
}