//Write a program that stimulates strcat() using user defined functions

#include<stdio.h>
#include<conio.h>

void concatenate(char *s1, char *s2);

void main()
{
	char str1[200], str2[200];
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	concatenate(str1, str2);
	printf("Concatenated string: %s", str1);
	getch();
}

void concatenate(char *s1, char *s2)
{
	int i=0,j=0;
	while(s1[i]!='\0')
		i++; // i will now be the length of s1

	while(s2[j]!='\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i]='\0'; //null terminating
}