//A program to evaluate the value of r when values of A and B are given where A and B are integers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int A,B;
    float r;
    printf("Enter integer values of A and B:");
    scanf("%d%d",&A,&B);
    r = (float)A/(float)B;
    printf("\nA:%d \nB:%d \nThe value of r (A/B) %f",A,B,r);
    getch();
}
