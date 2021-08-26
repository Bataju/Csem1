//Create a function that copies the string

#include<stdio.h>
#include<conio.h>

void copy(char s1[],char s2[])
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';
}

void main()
{
	char str1[100],str2[100];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	copy(str1, str2); //here str1 stores whatever str2 has even if str2 is longer
	printf("The copied string is: %s",str1);
}