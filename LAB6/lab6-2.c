//A program to print chess board pattern

//\xdb prints a white space

#include<stdio.h>
#include<conio.h>

void main()
{
    int row=0,column=0;
    for(row=0;row<8;row++)
    {
        for(column=0;column<8;column++)
        {
            if((row+column)%2 == 0)
                printf("\xdb\xdb");
            else
                printf("  ");
        }
    printf("\n");
    }
}