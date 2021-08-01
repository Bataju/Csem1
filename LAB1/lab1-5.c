//A program to calculate volume of a sphere.

#include<stdio.h>
#include<conio.h>

void main()
{
    float r, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&r);
    volume = (4/3) * (22/7) * r * r * r;
    printf("\nThe volume of the sphere is: %f", volume);
    getch();
}
