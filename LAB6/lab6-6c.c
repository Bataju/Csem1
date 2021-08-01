//A program to print sum to n terms 1-x^2/2!+x^4/4!-x^6/6!+....

#include<stdio.h>
#include<conio.h>
#include <math.h>

void main()
{
    int n,i,j,sign=1,power=0;
    float x,sum=0,fact,num;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the number of terms to evaluate(n): ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        num = pow(x,power);
        fact=1;
        for(j=1;j<=power;j++)
            fact*=j;
        
        sum += sign * (num / fact);
        sign*=-1;
        power+=2;
    }
    printf("S=%f",sum);
}