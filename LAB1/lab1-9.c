//A program to calculate the volume of a cuboid.

#include<stdio.h>
#include<conio.h>

void main()
{
    float l,b,h,volume;
    printf("Enter the length, breadth and height: ");
    scanf("%f%f%f",&l,&b,&h);
    volume = l * b * h;
    printf("\nThe volume of the cuboid is %f", volume);
    getch();
}