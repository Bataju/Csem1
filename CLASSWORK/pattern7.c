#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j,k;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
            {
                for(k=i;k<=num;k++)
                    printf("%d ",k);
            }
            else
                printf("  ");
         }
        printf("\n");
    }
}
               
          
          
       