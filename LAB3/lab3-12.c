//A program to illustrate concept of search set to read strings.

/*The characters entered after ^ are not allowed in the input.
No character entered after the forbidden characters is read*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[70];
    printf("Enter a string: ");
    scanf("%[^Mm]", &str); //anything except M and m
    printf("The read string is: %s",str);
}