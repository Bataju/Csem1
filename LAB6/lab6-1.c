//A program to print multiplication table of m*n

#include<stdio.h>
#include<conio.h>

void main()
{
    int m,n,i;
    printf("Enter the values of m and n: ");
    scanf("%d%d",&m,&n);
    printf("Multiplication table of %d\n",m);
    for(i=1;i<=n;i++)
    {
        printf("%d * %d = %d\n",m,i,m*i);
    }
    getch();
}