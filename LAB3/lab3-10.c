//A program to read strings using %wc format specifiers

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%10c",str);
    printf("The read string is:%s",str);
}
//reads character by character (even a white space is considered)
//if %s specifier is used the reading terminates at a white space
