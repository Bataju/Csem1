//Create a function that checks if two strings are equal

#include<stdio.h>
#include<conio.h>

int strcomp(char s1[],char s2[])
{
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
			return 1;
		else if(s1[i]<s2[i])
			return -1;
		else
			continue;
	}
	return 0;
}

void main()
{
	char str1[100],str2[100];
	int result;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	result = strcomp(str1,str2);
	if(result == 0)
		printf("The entered strings are equal");
	else
		printf("The entered strings are not equal");
}