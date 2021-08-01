//A program to calculate simple interest.

#include<stdio.h>
#include<conio.h>

void main()
{
    float p,t,r,i;
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("\nEnter the time period:");
    scanf("%f",&t);
    printf("\nEnter the rate of interest:");
    scanf("%f",&r);
    i = (p * t * r)/100;
    printf("\nThe simple interest is: %f", i);
    getch();
}
