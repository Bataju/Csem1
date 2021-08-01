//A program to combine questions 1,2,3 and 4 using switch statement

#include<stdio.h>
#include<conio.h>

float add(float x, float y)
{
    float sum=x+y;
    return sum;
}

int sum_of_digits(int n)
{
    int sum=0;
    while(n!=0)
    {
        int rem;
        rem = n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}

unsigned int fact(unsigned int n)
{
    unsigned int facto=1;
    int i;
    for(i=n;i>=1;i--) 
    {
        facto*=i;
    }
    return facto;
}

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
    char what_to_do;
    printf("CHOOSE AN OPTION");
    printf("\n\nTo add two numbers enter a ");
    printf("\nTo add all the digits of a number enter b ");
    printf("\nTo find the factorial of a number enter c ");
    printf("\nTo check whether a number is prime or composite enter d ");
    scanf("%c",&what_to_do);

    switch(what_to_do)
    {
        case 'a':
        {
            float num1;
            float num2;
            printf("\nEnter a number: ");
            scanf("%f",&num1);
            printf("Enter another number: ");
            scanf("%f",&num2);
            printf("\nSum: %.2f",add(num1,num2));
            break;
        }
        case 'b':
        {
            int num;
            printf("\nEnter an integer number: ");
            scanf("%d",&num);
            printf("\nThe sum of its digits is %d",sum_of_digits(num));
            break;
        }
        case 'c':
        {
            unsigned int num;
            printf("\nEnter a non-negative integer: ");
            scanf("%lu",&num);
            printf("\nFactorial of %u is %u",num,fact(num));
            break;
        }
        case 'd':
        {
            float num;
            printf("\nEnter a number: ");
            scanf("%f",&num);
            prime_check(num);
            break;
        }
        default:
        {
            printf("\nEnter a valid character");
            break;
        }
    }
    getch();
    return 0;
}