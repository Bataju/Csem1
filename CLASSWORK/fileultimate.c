#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void uppercase(char *s)
{
	int i=0;
	while(s[i]!='\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
}

void display(FILE *pointer)
{
	char ch;
	while(1)
	{
		ch=fgetc(pointer);//reading character by character
		if(ch == EOF)
			break;
		else
			printf("%c",ch);//printing character by character
	}
}

struct student
{
	char Name[50];
	char Address[50];
	char Mobile_number[20];
	char Guardian_name[50];
	char Email[30];
};

struct section_A
{
	struct student sA;
};

struct section_B
{
	struct student sB;
};

void main()
{
	int i,j;
	FILE *fpA, *fpB;
	struct section_A s_A[1];
	struct section_B s_B[1];
	fpA = fopen("section_A.txt", "w");
	if(fpA==NULL)
	{
		printf("Error loading the file.");
		exit(0);
	}
	else
	{
		printf("Section A\n");
		for(i=0;i<1;i++)
		{
			printf("Student %d\n", i+1);
			printf("Enter the student's name: ");
			fgets(s_A[i].sA.Name, 50, stdin);
			uppercase(s_A[i].sA.Name);
			printf("Enter the student's address: ");
			fgets(s_A[i].sA.Address, 50, stdin);
			uppercase(s_A[i].sA.Address);
			printf("Enter the student's mobile number: ");
			fgets(s_A[i].sA.Mobile_number, 20, stdin);
			uppercase(s_A[i].sA.Mobile_number);
			printf("Enter the guardian's name: ");
			fgets(s_A[i].sA.Guardian_name, 50, stdin);
			uppercase(s_A[i].sA.Guardian_name);
			printf("Enter the student's email: ");
			fgets(s_A[i].sA.Email, 30, stdin);
			fprintf(fpA, "%s\n%s\n%s\n%s\n%s\n",s_A[i].sA.Name, s_A[i].sA.Address, s_A[i].sA.Mobile_number, s_A[i].sA.Guardian_name, s_A[i].sA.Email);
		}
	}
	fclose(fpA);

	fpB = fopen("section_B.txt", "w");
	if(fpB==NULL)
	{
		printf("Error loading the file.");
		exit(0);
	}
	else
	{
		printf("Section B\n");
		for(i=0;i<1;i++)
		{
			printf("Student %d\n", i+1);
			printf("Enter the student's name: ");
			fgets(s_B[i].sB.Name, 50, stdin);
			uppercase(s_B[i].sB.Name);
			printf("Enter the student's address: ");
			fgets(s_B[i].sB.Address, 50, stdin);
			uppercase(s_B[i].sB.Address);
			printf("Enter the student's mobile number: ");
			fgets(s_B[i].sB.Mobile_number, 20, stdin);
			uppercase(s_B[i].sB.Mobile_number);
			printf("Enter the guardian's name: ");
			fgets(s_B[i].sB.Guardian_name, 50, stdin);
			uppercase(s_B[i].sB.Guardian_name);
			printf("Enter the student's email: ");
			fgets(s_B[i].sB.Email, 30, stdin);
			fprintf(fpB, "%s\n%s\n%s\n%s\n%s\n",s_B[i].sB.Name, s_B[i].sB.Address, s_B[i].sB.Mobile_number, s_B[i].sB.Guardian_name, s_B[i].sB.Email);
		}
	}
	fclose(fpB);

	fpA = fopen("section_A.txt","r");
	if(fpA == NULL)
	{
		printf("Error loading the file");
		exit(0);
	}
	else
	{
		printf("\nDisplaying details of students of section A\n");
		display(fpA);
	}
	fclose(fpA);

	fpB = fopen("section_B.txt","r");
	if(fpB == NULL)
	{
		printf("Error loading the file");
		exit(0);
	}
	else
	{
		printf("\nDisplaying details of students of section B\n");
		display(fpB);
	}
	fclose(fpB);
}
