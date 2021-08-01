//A program to calculate the discounted price of copies and pens.

#include<stdio.h>
#include<conio.h>

void main()
{
    float pr_copy,pr_pen,total,net_total;
    printf("Enter the price of a copy: ");
    scanf("%f", &pr_copy);
    printf("\nEnter the price of a pen: ");
    scanf("%f", &pr_pen);
    total = 2 * pr_pen + 5 * pr_copy;
    net_total = 0.9 * total;
    printf("\nThe discounted price is: %f", net_total);
    getch();
}
