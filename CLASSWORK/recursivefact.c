#include<stdio.h>
#include<stdio.h>

long int calculate_factorial(int n)
{
    long int fact;
    if(n==0 || n==1)
        fact=1;
    else
        fact = n*calculate_factorial(n-1);
    return fact;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Factorial of %d is %ld",num,calculate_factorial(num));
}