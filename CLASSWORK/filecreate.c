#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE *fp; //a file pointer
	char ch;
	fp = fopen("D:\\filehandling\\lol.txt", "w");//create a file in write mode
	if(fp == NULL)
	{
		fprintf(stderr, "This file cannot be opened"); //if file doesn't point to a destination it returns NULL
		exit(0);
	}
	fprintf(fp, "This is my first file program");//fprintf writes to file
	fclose(fp); //closes a file


	fp = fopen("D:\\filehandling\\lol.txt", "r");//opening file in read mode
	if(fp == NULL)
	{
		fprintf(stderr, "This file cannot be opened"); //if file doesn,t point to a destination it returns NULL
		exit(0);
	}

	while(1)
	{
		ch = fgetc(fp); //reading a character from a file and storing in character ch
		if(ch==EOF)//ascii character for enf of file is 26
			break;
		else 
			putchar(ch); //printf(" %c",ch); or fprintf(stdout,"%c",ch)
	}
	fclose(fp);
}