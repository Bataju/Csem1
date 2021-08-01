#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    printf("Enter the number of terms to display: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("(%d^2+%d^2)/2,",i,i+1);
    }
}