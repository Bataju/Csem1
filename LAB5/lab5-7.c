//A program to display the terns of a fibonacci sequence

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,first,second,next;
    printf("Enter the numbers of elements you want to display: ");
    scanf("%d", &n);
    first = 0;
    second = 1;
    if(n==0)
        printf("No numbers to display.");
    else if(n==1)
        printf("0");
    else
    {
        printf("%d\t%d\t",first,second);
        for(i=1; i<=n-2; i++)
        {
            next=first+second;
            printf("%d\t", next);
            first = second;
            second = next;
        }
    }
    getch();
}