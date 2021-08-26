#include<stdio.h>
#include<conio.h>

void main()
{
    int rem, num, sum=0, base=1;
    printf("Enter the decimal integer for conversion: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 2;
        sum = sum + base * rem;
        base = base * 10;
        num = num / 2;
    }
    printf("The number in binary is: %d", sum);
}