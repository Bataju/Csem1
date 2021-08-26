#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i, j;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
            printf("%d ", j);
        printf("\n");
    }
}