#include<stdio.h>
#include<conio.h>
void main()
{
    float x, y;
    printf("enter the value of x: ");
    scanf("%f", &x);
    y = (x!=50)?((x < 50)?(2*x+300):(50*x-100)):200;
    printf("y = %f", y);

}
