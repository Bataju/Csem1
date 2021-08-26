#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int i,j,notprimecount;
    for(i=2; i <= 500; i++)
    {
        notprimecount = 0;
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
                notprimecount++;
        }
        if(notprimecount == 0)
            printf("%d\n", i);
    }
}