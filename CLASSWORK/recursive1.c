//a program in C to print natural numbers using recursion

#include<stdio.h>
#include<conio.h>

int natural(int n,int i);

void main()
{
    int num,i=1;
    printf("Enter the boundary number:");
    scanf("%d",&num);
    natural(num, i);
}

int natural(int n,int i)
{
    if(i<=n)
    {
        printf("%d\t",i);
        natural(n, i+1);
    }
}