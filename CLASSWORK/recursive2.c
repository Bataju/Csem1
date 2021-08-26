//a program to print sum 1 to n
#include<stdio.h>
#include<conio.h>

int sum(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
        return (n+sum(n-1));
    }
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Sum is %d",sum(num));
}