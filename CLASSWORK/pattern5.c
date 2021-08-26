#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=num;i>=1;i--)
    {
        for(j=num;j>=i;j--)
            printf("%d ",j);
        printf("\n");
    }
}