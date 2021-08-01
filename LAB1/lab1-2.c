//A program to find the value of s with given values of a,b and c.

#include<stdio.h>
#include<conio.h>

void main()
{
   int s,a,b,c = 20;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   s = a + b * c;
   printf("s = %d", s);
   getch();
}
