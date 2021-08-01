//A program to check if the entered number is positive, negative or zero.

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if (num == 0)
        printf("The number you entered is zero...");
    else if (num > 0)
        printf("The number you entered is positive...");
    else
        printf("The number you entered is negative...");
    getch();
}