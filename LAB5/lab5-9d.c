//A program to check if an entered integer is a twin prime number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,prime=0,prime1=0,prime2=0,isprime;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num==1)
        prime=1; //1 is not prime
    if(num==2)
        prime=0; //2 is prime
    //loop only works for number > 2
    for(i=2;i<=(num-1);i++)
    {
        if(num%i==0)
            prime++;
    }

    if(prime == 0)
        isprime=1;

    if(isprime == 1)
    {
        if(num==2 || num==3)
            prime1 = 1; 
        //means 0 and 1 are not prime(2-2 is 0 and 3-2 is 1)
        for(i=2;i<=(num-2-1);i++)
            {
                if((num-2)%i==0)
                    prime1++;
            }
        for(i=2;i<=(num+2-1);i++)
            {
                if((num+2)%i==0)
                    prime2++;
            }
        if(prime1==0 || prime2==0)
            printf("It is a twin prime number.");
        else
            printf("A prime but not a twin prime.");
    }
    else
        printf("Not a prime number.");
    getch();
}