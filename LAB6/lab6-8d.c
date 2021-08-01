//A program to display the pattern
/*A
  A B
  A b C
  A B C D
  A b C d E*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    int i,j;
    printf("Enter a character: ");
    ch = getchar();
    if(ch>97 || ch<122)
        ch = ch-32; //changing lowercase to uppercase 
    
    for(i=65;i<=ch;i++)
    {
        for(j=65;j<=i;j++)
        {
            if(i%2==1 && j%2==0)//display lowercase
                printf("%c ",j+32);
            else
                printf("%c ",j);//display uppercase
        }
        printf("\n");
    }
}