//A program to display the sequence (1^2+2^2)/2 ,(2^2+3^2)/2, (3^2+4^2)/2,.....

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    float term;
    printf("Enter the number of terms to display: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term = (float)(i*i + (i+1)*(i+1))/2;
        printf("%.2f\t",term);
    }
}