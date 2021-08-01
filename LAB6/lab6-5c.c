//A program to display the sequence 1,2,5,10,17,...

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,term=1;
    printf("Enter how many numbers to display: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",term);
        term += 2*i - 1;
    }
}