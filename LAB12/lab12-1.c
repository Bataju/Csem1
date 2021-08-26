//A program to read a year from a user and write to a file only if it is a leap year

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int is_leapyear(int);

void main()
{
	int year;
	FILE *ptr;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(is_leapyear(year) == 1)
	{
		printf("It is a leap year.");
		ptr = fopen("Leap_year.txt","a+");
		if(ptr == NULL)
		{
			printf("\nThis file cannot be opened.");
			exit(0);
		}
		fprintf(ptr, "%d\n", year);
		fclose(ptr);
	}
	else
		printf("It is not a leap year.");
}

int is_leapyear(int y)
{
	if(y % 4 != 0)
		return 0;
	else if(y % 100 != 0)
		return 1;
	else if(y % 400 == 0)
		return 1;
	else
		return 0;
}
//A leap year is exactly divisible by 4 except for century years (years ending with 00).
//The century year is a leap year only if it is perfectly divisible by 400.




