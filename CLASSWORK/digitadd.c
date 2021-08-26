#include<stdio.h>
#include<conio.h>

void main()
{
    int rem,sum;
    long int num;
    printf("Enter an integer: ");
    scanf("%ld", &num);
    do
    {
        sum = 0;
        while(num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
    num = sum;
    printf("%d  ",sum);
    }while(sum / 10 != 0);
}