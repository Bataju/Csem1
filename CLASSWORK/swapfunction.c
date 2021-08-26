#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
    int store=*a;
    *a=*b;
    *b=store;
}

void main()
{
    int x,y;
    printf("Enter the vaues of x and y: ");
    scanf("%d%d",&x,&y);
    printf("Values before swapping: x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\nValues after swapping: x=%d and y=%d",x,y);
}