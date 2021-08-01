//A program to compute the mid point of a line with two given endpoints.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x1,y1,x2,y2;
    float x,y;
    printf("Enter the coordinates of one endpoint x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of another endpoint x2 and y2: ");
    scanf("%d%d",&x2,&y2);
    x = (float)(x1 + x2)/2.0;
    y = (float)(y1 + y2)/2.0;
    printf("The midpoint of (%d,%d) and (%d,%d) is (%.1f,%.1f).",x1,y1,x2,y2,x,y);
}
