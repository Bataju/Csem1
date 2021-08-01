//A program to calculate equivalent resistance of two resistors when connected in series as well as parallel.

#include<stdio.h>
#include<conio.h>
void main()
{
    float r1,r2,s,p;
    printf("Enter the resistances of two resistors: ");
    scanf("%f%f", &r1,&r2);
    s = r1 + r2;
    p = (r1 * r2)/(r1 + r2);
    printf("Equivalent resistance: Series combination:%f ohm\nParallel combination:%f ohm.",s,p);
    getch();
}
