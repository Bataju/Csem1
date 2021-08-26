#include<stdio.h>
#include<conio.h>

int series(int x)
{
    if(x==1)
        return(1);
    else
        return(x+series(x-1));
}

int main()
{
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u",&n);
    printf("The result is %d",series(n));
    return 0;
}