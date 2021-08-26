//Write a program to read a string from main. Pass it to a function that finds the longest word, counts the  number of vowels and consonants in the word and display the counts and the word from main.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void longest_word(char s[],char l[],int *vowel_count, int *cons_count);

void main()
{
	int v_count=0,c_count=0;
	char str[200],longest[50];
	printf("Enter a string: ");
	gets(str);
	longest_word(str,longest,&v_count,&c_count);
	printf("\nLongest word is %s",longest);
	printf("\nNmber of vowel characters in longest word = %d",v_count);
	printf("\nNumber of consonant characters in longest word = %d",c_count);
	getch();
}

void longest_word(char s[],char l[],int *vowel_count, int *cons_count)
{
	int length=0,longest=0,index=0,j=0;
	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]!=' ' && s[i]!='\0') //space denotes end of a word \0 for the last word
		{
			length++; //length of a word
		}

		else
		{
			if(length > longest)
			{
				longest = length; //longest will be the length of the longest word
				index = i - longest; //index will be the index of the first letter of the longest word
			}

			length = 0;//length should again be made 0 after space character is encountered(for counting length of next word)
		}
	}

	for(int i=index;i<(index+longest);i++)
	{
		l[j] = s[i];
		j++;
	}
	l[j]='\0'; //null terminating the string


	for(int i=0;i<strlen(l);i++)
	{
		if(l[i]=='a' || l[i]=='e' || l[i]=='i' || l[i]=='o' || l[i]=='u')
			*vowel_count=*vowel_count+1;
		else
			*cons_count=*cons_count+1;
	}
}