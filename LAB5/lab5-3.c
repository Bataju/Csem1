//A program to add all the even numbers from 1 to n

#include<stdio.h>
#include<conio.h>

void main()
{
    unsigned int n,i,sum=0;
    printf("Enter the boundary number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum+=i;
    }
    printf("The sum is: %d",sum);
    getch();
}