//A program to read name, roll number, address and phone number of students until user enters no.
//Write it to a file and display the content of the file.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
	char name[50];
	int roll_number;
	char address[50];
	char phone_number[20];
};

void main()
{
	struct Student s[50];
	int i = 0;
	char ch, exit_condition[2];
	FILE *ptr;
	ptr = fopen("Student_record.txt", "a+");
	if(ptr == NULL)
	{
		printf("This file cannot be opened.");
		exit(0);
	}
	do
	{
		printf("\nSTUDENT %d", i+1);
		printf("\nEnter student's name: ");
		fgets(s[i].name, 50, stdin);
		printf("Enter student's roll number: ");
		scanf("%d", &s[i].roll_number);
		getchar(); //gets the \n character
		printf("Enter student's address: ");
		fgets(s[i].address, 50, stdin);
		printf("Enter student's phone_number: ");
		fgets(s[i].phone_number, 20, stdin);
		fprintf(ptr,"Name : %sRoll_number : %d\nAddress : %sPhone_number : %s", s[i].name, s[i].roll_number, s[i].address, s[i].phone_number);
		fprintf(ptr, "_____________________________\n");
		printf("Enter no to stop or yes to continue: ");
		gets(exit_condition);
		i++;
	}while(strcmp(exit_condition, "NO")!=0 && strcmp(exit_condition, "No")!=0 && strcmp(exit_condition, "no")!=0 );
	
	rewind(ptr);

	printf("\nSTUDENT DETAILS\n\n");
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