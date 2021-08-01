//A program to calculate mean of four integers.

#include<stdio.h>
#include<conio.h>

void main()
{
   int num1,num2,num3,num4;

   float mean;
   printf("Enter four integers: ");
   scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
   mean = (float)(num1 + num2 + num3 + num4)/4;
   printf("\nThe mean is %f.",mean);
   getch();
}
