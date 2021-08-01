//A program to calculate the value of s with given values of x and y.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float x,y,s;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("\nEnter the value of y: ");
    scanf("%f",&y);
    s = pow(x,5)+0.2*x*y+pow(y,7);
    printf("\nx:%.2f, y:%.2f and s:%.2f.",x,y,s);
    getch();
}
