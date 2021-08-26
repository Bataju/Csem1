#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	int i;
	struct Student
	{
		char name[40];
		int marks;
	}s[3];

	if((fp=fopen("student.txt","a+"))==NULL)
	{
		printf("File cannot be opened");
		exit(0);
	}

	for(i=0;i<3;i++)
	{
		printf("\nEnter name and marks");
		scanf("%s%d",&s[i].name,&s[i].marks);
		fprintf(fp,"%s -> %d\n",s[i].name,s[i].marks);
	}
	
	rewind(fp);//brings the execution arrow to the beginning from last
	i=0;
	while(fscanf(fp,"%s%d",s[i].name,s[i].marks)!=EOF)
	{
		if(i<3)
		{
		printf("Name : %s\nMarks : %d\n", s[i].name, s[i].marks);
		}
		else 
			break;
		i++;
	}
	fclose(fp);
	getch();
}