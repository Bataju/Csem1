#include<stdio.h>
#include<conio.h>

int count_even(int x);
int count_odd(int y);

int main()
{
    long int n;
    printf("Enter an integer: ");
    scanf("%ld",&n);
    printf("EVEN: %d",count_even(n));
    printf("\nODD: %d",count_odd(n));
    getch();
    return 0;
}

int count_even(int x)
{
    int rem,even=0;
    while(x!=0)
    {    
        rem=x%10;
        if(rem!=0 && rem%2==0)
            even++;
        x=x/10;
    }
    return even;
}

int count_odd(int y)
{
    int rem,odd=0;
    while(y!=0)
    {    
        rem=y%10;
        if(rem%2==1)
            odd++;
        y=y/10;
    }
    return odd;
}
