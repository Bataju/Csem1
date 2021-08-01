//A program to check if the entered character is lowercase or uppercase and convert to the other form.

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    if(ch >= 65 && ch <=90)
    {
        printf("UPPERCASE");
        printf("\nThe converted character to lowercase is %c.",ch + 32);
    }
    
    if(ch >= 97 && ch <= 122)
    {
        printf("lowercase");
        printf("\nThe converted character to uppercase is %c.",ch - 32);
    }
    //OR
    // if(ch>='A' && ch<='Z')
    // printf("The converted character is %c",ch + ('a' - 'A'));
    // if(ch>='a' && ch<='z')
    // printf("The converted character is %c",ch - ('a' - 'A'));
    getch();
}