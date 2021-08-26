#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp
{
	char name[40];
	int salary;
};

void main()
{
	struct emp e;
	int flag = 1;
	FILE *fp;
	char filename[30];
	printf("Enter filename: ");
	scanf("%s",filename);

	if((fp=fopen(filename, "wb"))==NULL)//write binary mode
	{
		printf("ERROR");
		exit(0);
	}

	while(flag)
	{
		printf("\nEnter name and salary of an employee: ");
		scanf("%s%d",e.name,&e.salary);
		fwrite(&e, sizeof(e),1,fp);
		printf("Enter 1 to contunue and 0 to exit: ");
		scanf("%d",&flag);
	}
	fclose(fp);

	//extracting the binary data back

	if((fp=fopen(filename, "rb"))==NULL)//read binary mode
	{
		printf("ERROR");
		exit(0);
	}

	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("\nName:%s \t Salary: %d", e.name, e.salary);
	}
	fclose(fp);

}