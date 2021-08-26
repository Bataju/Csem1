//Create a structure Date containing three members int dd ,int mm and int yy. Create another structure person containing four members name, address, phone number and dob(create an object of struct Date inside Person). 
//Using these structures write a program to input tge records until the user enters 'n' or 'N'. Display the contents in tabular form

#include<stdio.h>
#include<conio.h>

struct Date
{
	int dd;
	int mm;
	int yy;
};

struct Person
{
	char Name[50];
	char Address[50];
	char Telephone[20];
	struct Date d;
};

int main()
{
	struct Person p[20];
	int i=0;
	char ch;
	do
	{
		printf("Record %d\n",i+1);
		printf("Enter the name: ");
		gets(p[i].Name);
		printf("Enter the address: ");
		gets(p[i].Address);
		printf("Enter the telephone number: ");
		gets(p[i].Telephone);
		printf("Enter the birth year: ");
		scanf("%d",&p[i].d.yy);
		printf("Enter the birth month in number: ");
		scanf("%d",&p[i].d.mm);
		printf("Enter the birth day: ");
		scanf("%d",&p[i].d.dd);
		printf("Enter 'n' or 'N' to stop or any character to continue: ");
		scanf(" %c",&ch);
		getchar();
		printf("\n");
		i++;
	}while(ch != 'n' && ch != 'N');

	printf("%-20s%-20s%-20s%s","NAME","ADDRESS","TELEPHONE_NO","DATE_OF_BIRTH");
	for(int j=0;j<i;j++)
	{
		printf("\n%-20s%-20s%-20s%d-%d-%d",p[j].Name,p[j].Address,p[j].Telephone,p[j].d.dd,p[j].d.mm,p[j].d.yy);
	}
	return 0;
}