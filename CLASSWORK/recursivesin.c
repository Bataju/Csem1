#include<stdio.h>
#include<conio.h>

float power(int n,float x)
{
    if(n==0)
        return 1;
    else
        return x*power(n-1, x);
}

long int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

void main()
{
    int i,n,sign=-1;
    float term,x,rad,sum=0;
    printf("Enter the angle in degree x: ");
    scanf("%f",&x);
    rad=(22.0/(7*180))*x;
    printf("Enter the number of terms n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sign*=-1;
        term =sign * power((2*i-1),rad) / fact((2*i-1));
        sum += term;
    }
    printf("sin %.2f degree = %.2f",x,sum);
}