//A program to display the pattern
/*      1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j,k,l;
    printf("Enter the number of lines to display: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=num;j>=1;j--) //2*num-1 is the max characters in a line
        {
           if(j==i)
           {
                for(k=1;k<=i;k++)
                    printf("%d ",k);
                for(l=k-2;l>=1;l--)//(l=k-1-1) -1 brings the value of k to the last printed value of k
                                   //and another -1 because a value one less than the last value is to be printed 
                    printf("%d ",l);
           }
           else
            printf("  ");
        }
        printf("\n");
    }
    getch();
}