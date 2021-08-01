//A program to rea and display a string using gets() and puts()

#include<stdio.h>
#include<conio.h>

void main()
{
    char a[40];
    printf("Enter a string: ");
    gets(a);
    printf("The string entered is ");
    puts(a);
    getch();
}