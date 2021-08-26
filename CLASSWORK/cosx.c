#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,i,j,den,sign=-1;
    float x,sum=0,num,term;
    printf("Enter the value of x in radian and n:");
    scanf("%f%d",&x,&n);
        for(i=0;i<n;i++)
        {
            sign*=-1;
            num=pow(x,2*i);
            den=1;
            for(j=1;j<=(2*i);j++)
            {
                den*=j;
            }
            term=sign * (num / den);
            sum += term; 
        }
    
    printf("cosx:%f",sum);
}