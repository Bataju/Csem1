//Demonstration of strcat (can only be used with two strings not more than two)


#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char str1[200],str2[200];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	strcat(str1,str2); //the concatenated string resides in str1 i.e. the preeceeding one
	printf("The concatenated string is %s", str1);
}