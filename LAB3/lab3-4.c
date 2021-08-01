//A program to illustrate different format specifiers

#include<stdio.h>
#include<conio.h>

void main()
{
    int n = 12345;
    printf("case 1: %d", n);
    printf("\ncase 2: %i",n);
    printf("\ncase 3: %15d",n);
    printf("\ncase 4: %-15d",n);
    printf("\ncase 5: %015d",n);
    printf("\ncase 6: %+15d",n);
    printf("\ncase 7: %3d",n);
    getch();
}