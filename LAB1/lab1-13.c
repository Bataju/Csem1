//A program to ask the user for a character and display it.

#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    printf("Enter a character you like:");
    a = getchar();
    printf("\nThe character you entered is %c.",a);
    getch();
}
