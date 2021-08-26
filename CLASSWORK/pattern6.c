#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j,k;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=num;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
                for(k=j;k<=num;k++)
                    printf("%d ", k);
            else
                printf("  ");
        }
        printf("\n");
    }
}