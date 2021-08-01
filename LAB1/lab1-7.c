//A program to evaluate the value of v when a and y are given.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float x,y,v;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("\nEnter the value of y:");
    scanf("%f",&y);
    v = pow(x,3) + pow(y,2) - (100 / x);
    printf("\nThe value of v is %f", v);
    getch();
}