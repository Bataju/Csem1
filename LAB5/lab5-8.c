//A program to read an integer and find the sum of its digits

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,sum=0,rem;
    printf("Enter the integer: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    printf("\nSum of its digits is %d.",sum);
    getch();
}