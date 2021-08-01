//A program to evaluate s=2+4+6+8+...+2n

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,s=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=(i*2);
    printf("s = %d",s);
}
