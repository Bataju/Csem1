//A program to check if a person is eligible for seniority allowance

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age > 65)
        printf("You are eligible..");
    else
        printf("You aren't eligible..");
    getch();
}