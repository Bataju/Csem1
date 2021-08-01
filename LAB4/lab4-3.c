//A program to calculate the area of a triangle.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a, b, c;
    float s, area;
    printf("Enter the three sides of a triangle: ");
    scanf("%d%d%d", &a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b){
        s = (float)(a+b+c)/2;
        area = sqrt (s * (s-a)*(s-b)*(s-c));
        printf("The area of the triangle is %f.", area);
    }
    else
        printf("The triangle is not possible.");
    getch();
}