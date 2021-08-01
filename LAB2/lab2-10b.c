//A program to evaluate the value of r when the values of a,b,c,x,y,p,q are given.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,x,y,p,q,r,helper;
    printf("Enter the values of a,b,c,p,q,x and y respectively: ");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&p,&q,&x,&y);
    helper = (2 * x + y)/(p - q);
    r = pow((a+b), helper) + c - 100;
    printf("a:%.2f \nb:%.2f \nc:%.2f \np:%.2f \nq:%.2f \nx:%.2f \ny:%.2f \nThe value of r is %.2f",a,b,c,p,q,x,y,r);
    getch();
}
