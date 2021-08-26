//Write a program to find the frequency of a character entered by a user in a string

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[200], ch;
	int frequency=0, i=0;
	printf("Enter a string: ");
	gets(str);
	printf("Enter the character whose frequency is to be determined: ");
	ch = getchar();
	while(str[i] != '\0')
	{
		if(str[i]==ch)
			frequency ++;
		i++;
	}
	printf("Frequency of %c = %d", ch, frequency);
}