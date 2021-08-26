//array within struct and array of structures
//a struct to store data of 3 students, their score in 6 subjects and calculate the average score

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

struct student //defining structure outside main
	{
		char name[100];
		int roll;
		char section;
		float marks[6];
		float sum;
	}; 

void main()
{
	struct student s[2]; //declaring array of structures (for 3 students)

	for(int i=0;i<3;i++)
	{
		printf("\nSTUDENT %d",i+1);
		printf("\nEnter the student's name: ");
		gets(s[i].name); //scanf("%s",s.name) & is not needed for strings

		for(int k=0;k<strlen(s[i].name);k++)
		{
			s[i].name[k]=toupper(s[i].name[k]);
		}

		printf("Enter the student's roll number: ");
		scanf("%d",&s[i].roll);
		printf("Enter the student's section: ");
		getchar();//takes \n after we hit enter

		s[i].section = getchar();
		s[i].section = toupper(s[i].section);

		// s[i].sum = 0; no need to do this because struct members are zero initialised

		printf ("Enter the student's marks in 6 subjects: \n");
		for(int j=0;j<6;j++) //loop to read marks in 6 subjects and add them
		{
			scanf("%f",&s[i].marks[j]);
			s[i].sum+=s[i].marks[j];
		}
		getchar(); //to take \n character 
	}

	printf("\nSTUDENT DATA\n");

	for(int i=0;i<3;i++)
	{
		printf("\nNAME: %s", s[i].name);
		printf("\nROLL NO.: %d",s[i].roll);
		printf("\nSECTION: %c",s[i].section);
		printf("\nTOTAL MARKS: %f",s[i].sum);
		printf("\nAVERAGE MARKS: %f",(s[i].sum)/6); //average = sum / 6
		printf("\n");
	}
}