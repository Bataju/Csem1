#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,even=2;
    printf("How many even numbers do you want to see?");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",even);
        even+=2;
    }
}