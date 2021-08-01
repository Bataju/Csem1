//A program to display prime and palindrome numbers within a range and also keep their count

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n1,store_n1,n2,prime=0,pr_count=0,pa_count=0,i,j,rem,new=0,use_i;
    printf("Enter two positive integers: ");
    scanf("%d%d",&n1,&n2);
    
    if(n1<0 || n2<0)
        goto end; //the code below is not to be executed for negative numbers
    store_n1=n1;
    if(n1>n2) //if n1>n2 swap their values
    {
        n1=n2;
        n2=store_n1;
    }

    printf("The prime numbers within the given range\n");
    for(i=n1+1;i<n2;i++)
    {
        prime=0;
        if(i==1)
            prime=1; //1 is not prime and it doesn't enter the therefore altering its value
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                prime++; //the value of prime will be 0 if i is prime
        }
        if(prime==0) //printing prime numbers
        {
            printf("%d\t",i);
            pr_count++;
        }
    }

    printf("\n\nThe palindromes within the given range\n");
    for(i=n1+1;i<n2;i++)
    {
        use_i = i;
        new=0;
        while(use_i!=0)
        {
            rem = use_i % 10;
            new=new*10+rem;
            use_i=use_i/10;
        }
        if(new==i)
        {
            printf("%d\t",i);//printing palindromes
            pa_count++;
        }
    }
    printf("\n\nNumber of prime numbers: %d",pr_count);
    printf("\n\nNumber of palindromes: %d", pa_count);
    getch();
    return 0;

    end:
        printf("Enter only positive integers.");
    getch();
    return 0;
}