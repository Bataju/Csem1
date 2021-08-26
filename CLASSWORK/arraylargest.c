#include<stdio.h>
#include<conio.h>

void main()
{
    int num[5],largest;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num[i]);
    }
    largest=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]>largest)
            largest=num[i];
    }
    printf("Largest is %d",largest);
}