//A program to display 1,1/3,1/5,1/7,...

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    printf("Enter the number of terms to display: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("1/%d\t",2*i-1);
}