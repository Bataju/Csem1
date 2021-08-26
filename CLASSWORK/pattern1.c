//A program to display a pattern (noob level)

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i,j;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }
}