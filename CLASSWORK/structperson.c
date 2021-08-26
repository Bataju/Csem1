//Nested structs (using one struct in another)

#include<stdio.h>
#include<conio.h>

void main()
{
	struct person
	{
		char name[100];
		int age;
	};

	struct student
	{
		int roll;
		char sec;
		struct person p;
	}s; //can declare a struct like this as well

	printf("Enter the name of the student: ");
	gets(s.p.name);
	printf("\nEnter the age: ");
	scanf("%d",&s.p.age);
	printf("\nEnter the roll number: ");
	scanf("%d",&s.roll);
	printf("\nEnter the section: ");
	scanf(" %c",&s.sec); //space before c for \n

	printf("\nStudent Data");
	printf("\nName:%s\nAge:%d\nRoll no:%d\nSection:%c",s.p.name,s.p.age,s.roll,s.sec);
}