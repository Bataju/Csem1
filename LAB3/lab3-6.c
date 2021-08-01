//A program to illusrtrate different format specifiers for characters

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch='a';
    printf("Case 1: %c",ch);
    printf("\nCase 2: %10c",ch);
    printf("\nCase 3: %-10c",ch);
}
