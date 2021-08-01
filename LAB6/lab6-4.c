//A program to keep adding the entered numbers until 0 is entered

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,sum=0,count=0;
    printf("Enter 0 to stop the program.\n");
    do
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        count++;
        sum+=num;
    } while (num != 0);
    printf("%d numbers were read.", count-1);//not counting zero
    printf("\nThe sum of entered numbers is: %d", sum);
}