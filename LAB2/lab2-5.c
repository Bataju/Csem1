//A program to check different data types in c.

#include<stdio.h>
#include<conio.h>

void main()
{
    float a;char b;long int c;unsigned int e;
    printf("Enter the value of a(float): ");
    scanf("%f",&a);
    printf("\nEnter the value of b(character): ");
    scanf(" %c",&b);
    printf("\nEnter the value of c and e(long int and unsigned int): ");
    scanf("%ld%u",&c,&e);
    printf("\nValue of a is %f.\nValue of b is %c.\nValue of c is %ld.\nValue of e is %u.",a,b,c,e);
    getch();
}
