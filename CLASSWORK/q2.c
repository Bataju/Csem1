#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n, den, i, j;
    float x, num, term, result=0;
    printf("Enter the value of x and number of terms n respectively: ");
    scanf("%f%d",&x,&n);
    for(i=1; i<=n; i++)
    {
        num = pow(x, i);
        den = 1;
        for(j=1;j<=i;j++)
            den *= j;
        term = num/den;
        result += term;
    }
    printf("The result is %f", result);
}