#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("Enter how many numbers to display: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d, ",i*i+1);
}