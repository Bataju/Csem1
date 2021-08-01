//A program to display sum or difference of two integers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nEnter an operator + or -: ");
    scanf(" %c", &op);
    if(op=='+')
        printf("\nSUM: %d + %d = %d",a,b,a+b);
    else
        printf("\nDIFFERENCE: %d - %d = %d",a,b,a-b);
}
