//Create a structure TIME containing hours, minutes and seconds as its member. Write a program that uses thi structure to input start time and stop time in main().
//Pass the structures to a function that calculates the sum and difference of start and stop time and display the results from main().

#include<stdio.h>
#include<conio.h>


struct TIME
{
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
}start, stop, sum = {0,0,0}, difference = {0,0,0}; //initializing to zero(we need to initialize while declaring and not later) 

typedef struct TIME T;

void func(T *start, T *stop, T *sum, T *difference)
{
		if((start->seconds + stop->seconds) >= 60)
		{
			sum->seconds = (start->seconds + stop->seconds)%60;
			sum->minutes += 1;
		}
		else
			sum->seconds = (start->seconds + stop->seconds);


		if((start->minutes + stop->minutes + sum->minutes) >=60)
		{
			sum->minutes = (start->minutes + stop->minutes + sum->minutes)%60;
			sum->hours += 1;
		}
		else
			sum->minutes = (start->minutes + stop->minutes + sum->minutes);
	
		sum->hours = (start->hours+stop->hours+sum->hours)%24;



		if(start->hours >= stop->hours)
			difference->hours = start->hours - stop->hours;

		else
			difference->hours = stop->hours - start->hours;

		if(start->minutes >= stop->minutes)
			difference->minutes = start->minutes - stop->minutes;

		else
			difference->minutes = stop->minutes - start->minutes;

		if(start->seconds >= stop->seconds)
			difference->seconds = start->seconds - stop->seconds;

		else
			difference->seconds = stop->seconds - start->seconds;
}

int main()
{
	printf("START TIME");
	printf("\nEnter the hours: ");
	scanf("%u",&start.hours);
	printf("Enter the minutes: ");
	scanf("%u",&start.minutes);
	printf("Enter the seconds: ");
	scanf("%u",&start.seconds);

	printf("\nSTOP TIME");
	printf("\nEnter the hours: ");
	scanf("%u",&stop.hours);
	printf("Enter the minutes: ");
	scanf("%u",&stop.minutes);
	printf("Enter the seconds: ");
	scanf("%u",&stop.seconds);

	
	func(&start, &stop, &sum, &difference);

	printf("\nSUM: %uhours %uminutes %useconds",sum.hours,sum.minutes,sum.seconds);
	printf("\nDIFFERENCE: %uhours %uminutes %useconds",difference.hours,difference.minutes,difference.seconds);
}