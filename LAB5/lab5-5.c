//A program to display factorial of a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int fact=1,i;
    float n;
    printf("Enter the number whose factorial is to be determined:");
    scanf("%f",&n);

    if(n-(int)n != 0)
        printf("Factorial of a decimal number doesn't exist.");
    else
    {
        if(n==0)
            printf("Factorial of 0 = 1");
        else if(n>0)
            {
                for(i=n;i>=1;i--)
                    fact*=i;
                printf("Factorial of %d = %d",n,fact);
            }
        else
            printf("Enter a valid number.");
    }
        getch();
}