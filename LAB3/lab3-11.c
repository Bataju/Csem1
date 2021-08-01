//A program to illustrate concept of defining search set to read strings

//%[]- only characters within the square brackets are allowed as an input

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[70];
    printf("How old are you?");
    scanf("%[0-9]",str); //only integers allowed
    printf("Age: %s", str);
    printf("\nWhat is your zodiac sign?");
    scanf(" %[a-zA-Z]",str); //only characters allowed
    printf("Zodiac: %s", str);
}