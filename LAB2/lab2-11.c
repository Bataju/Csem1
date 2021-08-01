//A program to swap values of two variables.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,t;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("\nThe entered value of a and b are a: %d and b: %d",a,b);
    t = a;
    a = b;
    b = t;
    printf("\nThe new value of a and b after swap are a: %d and b: %d",a,b);
    getch();
}