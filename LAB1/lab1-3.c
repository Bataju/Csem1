//A program to find size of data types and find address of variables

#include<stdio.h>
#include<conio.h>

void main()
{
   int s,a,b;
   float p;
   printf("Address of s is %x",&s);
   printf("\nAddress of a is %x",&a);
   printf("\nThe number of bytes occupied by s is %d",sizeof(s));
   printf("\nSize of a is %d",sizeof(a));
   printf("\nSize of 1.5 is %d",sizeof(1.5));
   printf("\nSize of float data type is %d", sizeof(float));
   getch();
}