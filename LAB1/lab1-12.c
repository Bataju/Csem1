//A program to ask user's name and age and display them.

#include<stdio.h>
#include<conio.h>

void main()
{
    char name[20];
    int age;
    printf("Enter your name: ");
    gets(name);
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("\nThe entered name is ");
    puts(name);
    printf("\nThe entered age is %d.", age);
    getch();

}