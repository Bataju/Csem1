//A program to read an unsigned integer n and display from 1 to n ad n to 1

#include<stdio.h>
#include<conio.h>

void main()
{
    unsigned int i,n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",i);
    printf("\n");
    for(i=n;i>=1;i--)
        printf("%d\t",i);
    getch();
}