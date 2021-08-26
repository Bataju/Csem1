//Create a function that concatenates two given strings

#include<stdio.h>
#include<conio.h>

void cat(char r[],char s1[],char s2[])
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		r[i]=s1[i];
		i++;
	}
	while(s2[j]!='\0')
	{
		r[i]=s2[j];
		j++;
		i++;
	}
	r[i]='\0';
}

void main()
{
	char str1[100],str2[100],res[200];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	cat(res, str1, str2);
	printf("The concatenated string is: %s",res);
}