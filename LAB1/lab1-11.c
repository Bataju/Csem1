//A program to calculate total seconds spent in C in 30 days.

#include<stdio.h>
#include<conio.h>

void main()
{
    int hrs,mins,secs,total_secs;
    printf("Enter the number of hours, minutes and seconds you study C in a day:");
    scanf("%d%d%d",&hrs,&mins,&secs);
    total_secs = ((hrs * 60 * 60) + (mins * 60) + secs) * 30;
    printf("\nThe total number of seconds you spend in C in 30 days is %d.",total_secs);
    getch();
}
