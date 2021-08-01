//A program to display the pattern
/*
# # # # *
# # # * *
# # * * *
# * * * *
* * * * *
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j;
    printf("Enter how many lines to display: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j<i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
