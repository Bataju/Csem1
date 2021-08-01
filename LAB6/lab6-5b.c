//A program to display a sequence of even numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("Enter the boundary number: ");
    scanf("%d",&n);
    if(n==0 || n==1)
        printf("No even numbers to display.");
    for(i=2;i<=n;i=i+2)
        printf("%d\t",i);
}