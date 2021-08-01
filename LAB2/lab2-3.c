//A program to read three integers and display the largest one.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter any three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("\nLARGEST: %d",a);
    else if(b>a && b>c)
        printf("\nLARGEST: %d",b);
    else
        printf("\nLARGEST: %d",c);
    getch();
}
