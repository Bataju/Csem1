//A program to print a pattern
/*5 4 3 2 1
  5 4 3 2
  5 4 3
  5 4
  5*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,num;
    printf("Enter the boundary number: ");
    scanf("%d",&num);
    if(num<1)
        printf("The number must be positive.");
    else
    {
        for(i=1;i<=num;i++)
        {
            for(j=5;j>=i;j--)
                printf("%d ",j);
            printf("\n");
        }
    }
}
     