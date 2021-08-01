//A program to input the number of seconds and display the number of minutes and seconds.

#include<stdio.h>
#include<conio.h>

void main()
{
    int secs, mins;
    printf("Enter the number of seconds:");
    scanf("%d", &secs);
    mins = secs / 60 ;
    secs = secs - mins * 60;
    printf("\nIt is equivalent to %d minutes and %d seconds.", mins, secs);
    getch();
}
