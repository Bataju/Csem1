// A program to check if an entered integer is a palindrome

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,rem,storage,new=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    storage = num;

    while(num != 0)
    {
        rem = num % 10;
        new = new*10 + rem;
        num = num / 10;
    }
    if(new == storage)
        printf("\nPALINDROME");
    else
        printf("\nNOT PALINDROME");
    getch();
}