//Create a structure employee to store name, telephone as a character string and salary. Input records of 10 employees and display them. Alson display the highest, lowest and average salary of all 10 employees.

#include<stdio.h>
#include<conio.h>

struct employee 
{
	char Name[50];
	char Phone_number[20];
	unsigned int Salary;
};

void main()
{
	struct employee e[10]; //array of structs
	unsigned int highest, lowest;
	unsigned long long int sum=0;
	float avg;
	for(int i=0;i<10;i++)
	{
		printf("\nEnter the employee's name: ");
		gets(e[i].Name);
		printf("Enter the employee's phone number: ");
		gets(e[i].Phone_number);
		printf("Enter the employee's salary: ");
		scanf("%u",&e[i].Salary);
		getchar(); //takes the new line character \n 
	}
	highest = e[0].Salary;
	lowest = e[0].Salary;
	for(int i=0;i<10;i++)
	{
		if(e[i].Salary > highest)
			highest = e[i].Salary;
		if(e[i].Salary < lowest)
			lowest = e[i].Salary;
		sum += e[i].Salary;
	}
	avg = sum / (float)10;
	printf("\nDATA");
	for(int i=0;i<10;i++)
	{
		printf("\n");
		printf("\nNAME: %s",e[i].Name);
		printf("\nPHONE NUMBER: %s",e[i].Phone_number);
		printf("\nSALARY: %u",e[i].Salary);
	}
	printf("\nHIGHEST SALARY: %u",highest);
	printf("\nLOWEST SALARY: %u",lowest);
	printf("\nAVERAGE SALARY: %f", avg);
}
