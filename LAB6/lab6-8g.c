//A program to print the pattern
/*  * * * * * * * 
      * * * * *
        * * * 
          *   */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j;
    printf("Enter the number of lines of pattern to print:: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//run (num) times to print (num) lines
    {
        for(j=1;j<=num*2-1;j++) //num*2-1 will be the number of asterisks in the 1st line which is the max
        {
            if(j>=i && j<=num*2-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
        