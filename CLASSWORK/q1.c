#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int i,j,n,den,sign=-1;
    float x,num,term, sum;
    printf("Enter the values of x and n");
    scanf("%f%d",&x,&n);
    sum = x;
    for(i=1;i<n;i++)
    {
        sign*=-1;
        num = pow(x, 2*i);
        den = 1;
        for(j=1;j<=2*i;j++)
            den *= j;
        term = sign * (num/den);
        sum+= term;
    }
    printf("f(x)=%f",sum);
}
