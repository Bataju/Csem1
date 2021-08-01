//A program to create a function to calculate the factorial of a number

#include<stdio.h>
#include<conio.h>

unsigned int fact(unsigned int n)
{
    unsigned int facto=1;
    int i;
    for(i=n;i>=1;i--)
    {
        facto*=i;
    }
    return facto;
}

int main()
{
    unsigned int num;
    printf("Enter a non-negative integer: ");
    scanf("%lu",&num);
    printf("Factorial of %u is %u",num,fact(num));
    return 0;
}