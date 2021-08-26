#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int power=0, rem, num, sum=0;
    printf("Enter the bnary number for conversion: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem = num % 2;
        sum = sum + rem * pow(2, power);
        num = num / 10;
        power++;
    }
    printf("The decimal number is: %d",sum);
}