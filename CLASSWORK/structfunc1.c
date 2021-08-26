//structure and function pass by reference(use of ->)
//for pointers we need to use -> insted of . to access the value in that location

#include<stdio.h>
#include<conio.h>


struct student
	{
		char name[100];
		int age;
		int roll;
		char sec;
	};

void display(struct student *); //passing the memory location so * is used

void main()
{
	struct student s;
	printf("Enter the name of the student: ");
	gets(s.name);
	printf("Enter the age: ");
	scanf("%d",&s.age);
	printf("Enter the roll number: ");
	scanf("%d",&s.roll);
	printf("Enter the section: ");
	scanf(" %c",&s.sec); //space before c for \n

	display(&s); //pass the address
}

void display(struct student *std)
{
	printf("\nStudent Data");
	printf("\nName:%s\nAge:%d\nRoll no:%d\nSection:%c",std->name,std->age,std->roll,std->sec); // dot(.) won't work
}