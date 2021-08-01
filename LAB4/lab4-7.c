//A program to evaluate the value of function f(x)

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y;
    printf("Enter the values of x:");
    scanf("%d", &x);
    if(x<=0)
    y = 0;
    else if(x>0 && x<=10)
    y = x*(x-10)*(x-15);
    else if(x>10 && x<=15)
    y = (x-10)*(x-15)*(x-20);
    else if(x>15 && x<=20)
    y = (x-15)*(x-20)*(x-30);
    else if(x>20 && x<=30)
    y = (x-20)*(x-30)*(x-0);
    else
    y = 0;
    printf("When x = %d, f(x) = %d",x,y);
    getch();
}
