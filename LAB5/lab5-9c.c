//A program to check if an entered integer is a prime number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,prime=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num==1)
        prime=1;
    for(i=2;i<=(num/2);i++)
    {
        if(num%i==0)
            prime++;
    }
    if(prime==0)
        printf("\nPRIME");
    else
        printf("\nNOT PRIME");
    getch();
}
