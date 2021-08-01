//A program to print a sequence 1,2,3,...,n

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("Enter the boundary number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",i);
}