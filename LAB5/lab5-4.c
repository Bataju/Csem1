//A program to read an integer n and find product 1 to n if n is even and sum 0 to n if n is odd

#include<stdio.h>
#include<conio.h>

void main()
{
    unsigned int n,i,prod=1,sum=0;
    printf("Enter the boundary number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=1;i<=n;i++)
            prod*=i;
        printf("\nThe product from 1 to %d is %d.",n,prod);
    }
    else
    {
        for(i=0;i<=n;i++)
            sum+=i;
        printf("\nThe sum from 0 to %d is %d.",n,sum);
    }
    getch();
}