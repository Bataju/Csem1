// Observe the output of the following program

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("%d=%c\t",i,i);
    }
    getch();
    return 0;
}