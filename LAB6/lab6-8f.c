//A program to display the pattern
/*          
          4 
        3 4 
      2 3 4 
    1 2 3 4
      2 3 4 
        3 4
          4   */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j,line=1;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    for(i=2*num-1;i>=1;i--)//2*num-1 is the number of lines to display
    {
      for(j=1;j<=num;j++)
      {
        if(i>=num && j>num-line)
          printf("%d ",j);
        else if(i<num && j>num-i)
          printf("%d ",j);
        else
          printf("  ") ;
      }
      line++;
      printf("\n");
    }
}