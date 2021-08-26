//Write a program to reverse a word using recrsive function.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse_word(char s[], char r[], int len);

void main()
{
	char word[50], reversed[50];
	int length;
	printf("Enter a word: ");
	scanf("%s", &word); //%s because it's a word
	length = strlen(word);
	reverse_word(word, reversed, length);
	printf("The reversed word is %s",reversed);
}

void reverse_word(char s[], char r[], int len)
{
	static int i=0;//static to prevent i from getting initialised everytime the function is called
	if(len == 0)
		r[i] = '\0';
	else
	{
		r[i] = s[len-1];
		i++;
		reverse_word(s,r,len-1);
	}
}