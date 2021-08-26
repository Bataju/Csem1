//A program to read an integer number and count the number of even and odd digits

#include<stdio.h>
#include<conio.h>

int is_even(int);

void main()
{
    int num,rem,even=0,odd=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num % 10; //rem is the last digit now
        if(rem!=0)
        {
        if(is_even(rem) == 1)
            even++;
        else
            odd++;
        }
        num=num/10;
    }
    printf("Number of even digits: %d",even);
    printf("\nNumber of odd digits: %d",odd);
}

int is_even(int n)
{
    if (n%2==0)
        return 1;//even
    else
        return 0;//odd
}
