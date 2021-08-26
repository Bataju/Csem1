//Create a structure having members name,address,telephone number and salary of an employee. Read and display them

#include<stdio.h>
#include<conio.h>

struct data
{
	char Name[50];
	char Address[50];
	unsigned long long int Telephone_number; //%llu for phone number
	unsigned int Salary;
};

void main()
{
	struct data d1;
	printf("Enter the employee's name: ");
	gets(d1.Name);
	printf("Enter the employee's address: ");
	gets(d1.Address);
	printf("Enter the employee's telephone number: ");
	scanf("%llu",&d1.Telephone_number);
	printf("Enter the employee's Salary: ");
	scanf("%u",&d1.Salary);
	printf("\nDATA");
	printf("\nNAME: %s",d1.Name);
	printf("\nADDRESS: %s",d1.Address);
	printf("\nTELEPHONE NUMBER: %llu",d1.Telephone_number);
	printf("\nSALARY: %u",d1.Salary);
	getch();
}