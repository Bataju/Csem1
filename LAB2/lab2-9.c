//A program to read number of girls and boys in your class and display the girl to boy ratio.

#include<stdio.h>
#include<conio.h>

void main()
{
    int girls,boys;
    float ratio;
    printf("Enter the number of girls in your class: ");
    scanf("%d",&girls);
    printf("\nEnter the number of boys in your class: ");
    scanf("%d",&boys);
    ratio = (float)girls / (float)boys;
    printf("\nThe girl to boy ratio in fraction is %d/%d.",girls,boys);
    printf("\n\nThe girl to boy ratio in decimal is %f.",ratio);
    getch();
}