//A program to display multiplication table of an integer

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i;
    printf("Enter a number you like: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    getch();
}