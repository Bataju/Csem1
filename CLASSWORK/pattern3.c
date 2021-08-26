#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j;
    printf("Enter how many lines of pattern to display: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    
}