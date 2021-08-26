#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num, i, j, is_prime, notprime_count=0, twinprime_count=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num == 1)
        notprime_count = 1;//1 is not prime and doesn't enter the loop.
     
    for(i=2;i<=sqrt(num);i++)
    {
        if(num % i == 0)
            notprime_count++;
    }
    if (notprime_count==0)
        is_prime = 1; //1 indicates true
    else
        is_prime = 0;//0 indicates false
    

    if(is_prime == 1)
    {
        for(j=(num-2); j<=(num+2); j=j+4)
        {
            notprime_count = 0;
            if(j == 1)
                notprime_count = 1;//1 is not prime and doesn't enter the loop.
     
            for(i=2;i<=sqrt(j);i++)
            {
                if(j % i == 0)
                    notprime_count++;
            }
            if (notprime_count==0)
                twinprime_count++; 
            
        }
    }
    if(twinprime_count == 1 || twinprime_count == 2)
        printf("Twin prime");
    else
        {
            if(is_prime == 1)
                printf("Only prime but not twin prime.");
            if(is_prime == 0)
                printf("Not a prime number");
        }
}