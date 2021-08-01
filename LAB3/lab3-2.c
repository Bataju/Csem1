//A program to read and display a character and a string.

#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    char b[20];
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("Enter a string: ");
    scanf("%s", &b);
    printf("The character is %c", a);
    printf("\nThe string is %s", b);
    getch();
}