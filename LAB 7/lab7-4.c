//A program to create a function to check if an entered number is prime

#include<stdio.h>
#include<conio.h>

void prime_check(float n)
{
    int store_int_n=(int)n;
    
    if(n<=1)
        printf("It is neither prime nor composite.");
    else if(n != store_int_n)
        printf("Floats can neither be prime nor composite.");
    else
    {
        int i,is_prime=1;
        for(i=2;i<store_int_n;i++)
        {
            if(store_int_n % i==0)
            {
                is_prime=0;
                break;
            }
    }
    if(is_prime==1)
        printf("Prime");
    else
        printf("Composite");
    }
}

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    prime_check(num);
    return 0;
}