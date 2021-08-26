//a program to print fibonacci series

#include<stdio.h>
#include<conio.h>

int fun(int );

int main()
{
int n;

printf("No. of terms you want to see in fibonacci series? \n ");
scanf("%d",&n);

printf("your fibonacci series are : \n");
printf("1\t");
fun(n);

return 0;
}

int fun(int n)
{

static int i=1,n1=0,n2=1,sum=0;

if(i==n)
    return 0;

else
{
    sum=n1+n2;
    printf("%d\t",sum);
    n1=n2;
    n2=sum;
    i++;
    fun(n);
}

}