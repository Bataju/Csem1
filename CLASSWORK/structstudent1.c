//A struct to store the record of 3 students using array of structures

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	//structure definition
	struct student 
	{
		char name[100];
		int roll;
		char section;
		float marks;
	}; // terminated by a semi colon
	

	struct student s[3]; //array of structures
	for(i=0;i<3;i++)
	{
	printf("Enter the student's name: ");
	gets(s[i].name); //scanf("%s",s.name) & is not needed for strings
	printf("\nEnter the student's roll number: ");
	scanf("%d",&s[i].roll);
	printf("\nEnter the student's section: ");
	getchar();//takes \n after we hit enter
	s[i].section = getchar();
	printf ("\nEnter the student's marks: ");
	scanf("%f",&s[i].marks);
	getchar();
	}
	printf("\nStudent data");
	for(i=0;i<3;i++)
	{
	printf("\nName: %s", s[i].name);
	printf("\nRoll no.: %d",s[i].roll);
	printf("\nSection: %c",s[i].section);
	printf("\nMarks: %f",s[i].marks);
	printf("\n");
	}
	getch();
}