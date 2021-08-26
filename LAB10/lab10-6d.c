//Write a function to stimulate strcmp() using user defined function

#include<stdio.h>
#include<conio.h>

int compare_strings(char *s1, char *s2);

void main()
{
	char str1[200], str2[200];
	int result;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	result = compare_strings(str1, str2);
	if(result==0)
		printf("EQUAL");
	else if(result > 0)
		printf("STRING 1 > STRING 2");
	else
		printf("STRING 2 > STRING 1");
	getch();
}

int compare_strings(char *s1, char *s2)
{
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
	}
	return 0;
}