//Create a function that reverses a string

#include<stdio.h>
#include<conio.h>

void rev(char s[], char n[])
{
	int j=0,i=0;
	for(i;s[i]!='\0';i++); // i now stores the length of the string eg: polk the i=4 but k is the 3rd index hence i-1 to store k
	for(i-1;i>0;i--){
		n[j] = s[i-1];
		j++;
	}
	n[j] = '\0';
}

void main()
{
	char str[100],new[100];
	printf("Enter a string: ");
	gets(str);
	rev(str, new);
	printf("The reversed string is %s",new);
}