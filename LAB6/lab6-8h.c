#include<stdio.h>
#include<conio.h>

int mod(int n)
{
    if(n>=0)
        return n;
    else
        return n*-1;
}

void main()
{
    int i,j;
    for(i=-6;i<=6;i++)
    {
        if(mod(i)>=3)
        {
            for(j=-6;j<=6;j++)
            {
                if(mod(i)+mod(j)==6)
                    printf("%d",mod(j));
                else
                    printf(" ");
            }
        }
        else
        {
           for(j=-6;j<=6;j++)
            {
                if(mod(i)+mod(j)==6 || mod(i)==mod(j))
                    printf("%d",6-mod(j));
                else
                    printf(" ");
            } 
        }
        printf("\n");
    }
}