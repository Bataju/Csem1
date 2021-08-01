//A program to create a function which adds all the digits of a number

#include<stdio.h>
#include<conio.h>

int sum_of_digits(int n)
{
    int sum=0;
    while(n!=0)
    {
        int rem;
        rem = n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    printf("The sum of its digits is %d",sum_of_digits(num));
    getch();
    return 0;
}