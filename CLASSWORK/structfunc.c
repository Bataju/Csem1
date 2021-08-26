//structure and function pass by value

#include<stdio.h>
#include<conio.h>


struct student
	{
		char name[100];
		int age;
		int roll;
		char sec;
	};

void display(struct student);

void main()
{
	struct student s;
	printf("Enter the name of the student: ");
	gets(s.name);
	printf("\nEnter the age: ");
	scanf("%d",&s.age);
	printf("\nEnter the roll number: ");
	scanf("%d",&s.roll);
	printf("\nEnter the section: ");
	scanf(" %c",&s.sec); //space before c for \n

	display(s);
}

void display(struct student std)
{
	printf("\nStudent Data");
	printf("\nName:%s\nAge:%d\nRoll no:%d\nSection:%c",std.name,std.age,std.roll,std.sec);
}