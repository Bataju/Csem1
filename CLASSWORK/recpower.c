#include<stdio.h>
#include<conio.h>

long int power(int x,int y)
{
    if(y==0)
        return(1);
    else 
        return(x * power(x,y-1));
}

int main()
{
    int x,y;
    printf("Enter values of x and y: ");
    scanf("%d%d",&x,&y);
    printf("Result is: %ld",power(x,y));
    return 0;
}