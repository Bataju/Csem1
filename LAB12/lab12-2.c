//A program to read words from the user until user enters 'NO' and write them to a file if the word is vowel free
//Display the content of file

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int is_vowel_free(char *);

void main()
{
	FILE *ptr;
	char word[50], ch;
	printf("Enter no to stop.\n");
	do
	{
		printf("Enter a word: ");
		scanf("%s", word);
		if(is_vowel_free(word) == 1)
		{
			ptr = fopen("Vowel_free.txt", "a+");
			if(ptr == NULL)
			{
				printf("\nThis file cannot be opened.");
				exit(0);
			}
			fprintf(ptr, "%s\t", word);
			fclose(ptr);
		}
	}while(strcmp(word, "NO") != 0 && strcmp(word, "no") != 0 && strcmp(word, "No") != 0);

	//Displaying the content of the file
	printf("\nDisplaying the words without vowels.\n");
	ptr = fopen("Vowel_free.txt", "r");

	if(ptr == NULL)
	{
		printf("\nThis file cannot be opened.");
		exit(0);
	}

	while(1)
	{
		ch = fgetc(ptr);
		if(ch == EOF)
			break;
		else
			putchar(ch);
	}
	fclose(ptr);
}

int is_vowel_free(char *word)
{
	int i=0;
	while(word[i]!='\0')
	{
		if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
			return 0;
		else if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
			return 0;
		else
			i++;
	}
	return 1;
}