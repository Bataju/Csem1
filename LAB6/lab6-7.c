/*A program to evaluate the series 1+x/1!+x^2/2!+..... until the term becomes less than 10^-6 */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,j,n_term=0;
    long double fact;//to store large values for larger numbers
    float x,term;
    double sum=0;

    printf("Enter the value of x: ");
    scanf("%f",&x);
    if(x==0)
    {
        printf("0 itself is less than 0.000001");
        return 0;
    }
    do
    {
        fact=1;
        for(j=1;j<=n_term;j++)
            fact*=j;
        term = pow(x,n_term) / fact;
        n_term++;
        sum+=term;
    }while(term >= pow(10,-6));

    printf("Number of terms = %d",n_term+1);
    printf("\nSum: %lf",sum);

    return 0;
}