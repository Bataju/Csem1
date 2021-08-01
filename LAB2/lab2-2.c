//A program to illustrate prefix increment operator.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x=5,v;
    v = ++x * ++x + ++x;
    printf("x=%d",x);
    printf("\nv=%d",v);
    getch();
}
