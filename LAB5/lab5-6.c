//A program to calculate x^n/n! where x is a float and n is an integer greater or equal to zero

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,fact=1;
    float x,s,numr=1;
    printf("Enter a float x and an integer n:");
    scanf("%f%d",&x,&n);
    if(n==0)
        fact = 1;
    else
    {
        for(i=1;i<=n;i++)
        {
            fact*=i;
            numr*=x;
        }
    }
    s = numr / fact;
    printf("The result is %f",s);
    getch();
}
