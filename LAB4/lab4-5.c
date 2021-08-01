//A program to read a number, check if it is even or odd and perform the required operations.

#include<stdio.h>
#include<conio.h>

void main()
{
    unsigned int a;
    printf("Enter a number: ");
    scanf("%u", &a);
    if (a % 2 == 0)
    {
        if (a > 100)
            printf("The number is even and greater than 100.");
        else
            printf("The number is even and less than 100.");
        
    }
    else{
        if (a % 11 == 0){
            if ( a % 7 != 0)
                printf("The number is odd, divisible by 11 and not by 7.");
            else
                printf("The number is odd, divisible by 11 and also by 7.");
        }
        else
            printf("The number is odd and not divisible by 11.");
        
    }
    getch();
}