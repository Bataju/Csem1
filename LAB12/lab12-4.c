//A program to input name, address, roll number, phone number and score of a student.
//Store the data in first.txt. Copy the content of first.txt to second.txt and display from there.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
	char name[50];
	int roll_number;
	char address[50];
	char phone_number[20];
	float score;
};

void main()
{
	FILE *ptr1,*ptr2;
	char ch;
	struct Student s;
	printf("Enter student's name: ");
	gets(s.name);
	printf("Enter student's roll number: ");
	scanf("%d",&s.roll_number);
	getchar();
	printf("Enter student's address: ");
	gets(s.address);
	printf("Enter student's phone number: ");
	gets(s.phone_number);
	printf("Enter student's score: ");
	scanf("%f",&s.score);
	ptr1 = fopen("First.txt","w+");
	if(ptr1 == NULL)
	{
		printf("This file cannot be opened.");
		exit(0);
	}
	fprintf(ptr1, "Name : %s\nRoll_number : %d\nAddress : %s\nPhone_number : %s\nScore : %f",s.name,s.roll_number,s.address,s.phone_number,s.score);
	rewind(ptr1);
	ptr2 = fopen("Second.txt","w+");
	if(ptr2 == NULL)
	{
		printf("This file cannot be opened.");
		exit(0);
	}
	while(1)
	{
		ch = fgetc(ptr1);
		if(ch == EOF)
			break;
		else
			fputc(ch, ptr2);
	}
	fclose(ptr1);
	rewind(ptr2);
	printf("\nDisplaying data from Second.txt\n");
	while(1)
	{
		ch = fgetc(ptr2);
		if(ch == EOF)
			break;
		else
			putchar(ch);
	}
	fclose(ptr2);
}