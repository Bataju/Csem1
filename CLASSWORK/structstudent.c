//A struct to store the record of a student

#include<stdio.h>
#include<conio.h>

void main()
{
	//structure definition
	struct student 
	{
		char name[100];
		int roll;
		char section;
		float marks;
	}; 
	// terminated by a semi colon
	

	struct student s;
	printf("Enter the student's name: ");
	gets(s.name); //scanf("%s",s.name) & is not needed for strings
	printf("\nEnter the student's roll number: ");
	scanf("%d",&s.roll);
	printf("\nEnter the student's section: ");
	getchar();//takes \n after we hit enter
	s.section = getchar();
	printf ("\nEnter the student's marks: ");
	scanf("%f",&s.marks);
	printf("\nStudent data");
	printf("\nName: %s", s.name);
	printf("\nRoll no.: %d",s.roll);
	printf("\nSection: %c",s.section);
	printf("\nMarks: %f",s.marks);
	getch();
}


