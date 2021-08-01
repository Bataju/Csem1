
//A program to evaluate value of r when values of p,q,u,v,x and y are given.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float p,q,u,v,x,y,helper1,helper2,r;
    printf("Enter the values of p,q,u,v,x and y respectively: ");
    scanf("%f%f%f%f%f%f",&p,&q,&u,&v,&x,&y);
    helper1 = (u / x) + (v /y);
    helper2 = pow(p,2)/(3 * pow(u,2.5)) - q /(2 * v);
    r = (pow(helper1,5))/(pow(helper2,3.5));
    printf("\np:%.2f \nq:%.2f \nu:%.2f \nv:%.2f \nx:%.2f \ny:%.2f \nThe value of r is %f",p,q,u,v,x,y,r);
    getch();
}
