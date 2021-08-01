//A program to calculate area and circumference of a circle.

#include<stdio.h>
#include<conio.h>

void main()
{
    float r,area,circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = (22/7) * r * r;
    circum = 2 * (22/7) * r;
    printf("\nThe area of the circle is: %f", area);
    printf("\n\nThe circumference of the circle is: %f", circum);
    getch();
}
