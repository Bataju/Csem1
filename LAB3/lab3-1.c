//A program to read characters using getche() and getchar().

#include<stdio.h>
#include<conio.h>

void main()
{
    char a,b;
    printf("Enter a character: ");
    a = getche();
    printf("\nEnter another character: ");
    b = getchar();
    printf("\nCharacter 1: ");
    putch(a);
    printf("\nCharacter 2: ");
    putchar(b);
}