//A program to print a pattern
/*1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j;
    printf("Enter a boundary number: ");
    scanf("%d",&num);
    if(num<1)
        printf("The number must be positive.");
    else
    {
        for(i=1;i<=num;i++)
        {
            for(j=1;j<=i;j++)
                printf("%d ",j);
            printf("\n");
        }
    }
}