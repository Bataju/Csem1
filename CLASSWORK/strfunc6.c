//Illustration of strcmp

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[100],str2[100];
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	if(strcmp(str1,str2)==0)
		printf("The strings entered are equal.");
	else
		printf("The strings entered are not equal.");
}