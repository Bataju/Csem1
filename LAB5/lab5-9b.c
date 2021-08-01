//A program to check if an entered integer is an armstrong number

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num,rem,new=0,i=0,store,store2;
    printf("Enter an integer: ");
    scanf("%d",&num);
    store = num;
    store2 = num;
    while(num != 0)
    {
        i = i+1;
        num = num/10;
    }

    while(store != 0)
    {
        rem = store % 10;
        new = new + pow(rem, i);
        store = store / 10;
    }
    if(new == store2)
        printf("ARMSTRONG");
    else
        printf("NOT ARMSTRONG");
    getch();
}