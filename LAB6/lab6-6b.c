//A program to evaluate e^-1

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,den=1,sign;
    float term,s=0;
    printf("Enter the number of terms to evaluate(n): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            sign=1;
        else
            sign=-1;
        den=1;
        for(j=1;j<=(i-1);j++)
            den*=j;
        term = (float)sign * 1 / den;
        s+=term;
    }
    printf("s = %f",s); 
}