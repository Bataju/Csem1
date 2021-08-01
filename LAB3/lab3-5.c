//A program to illustrate different format specifiers

#include<stdio.h>
#include<conio.h>

void main()
{
    float n=123.9876;
    printf("Case 1: %f",n);
    printf("\nCase 2: %e",n);
    printf("\nCase 3: %g",n);
    printf("\nCase 4: %15.4f",n);
    printf("\nCase 5: %-15.3f",-n);
    printf("\nCase 6: %015.4e",n);
    printf("\nCase 7: %.8f",n);
    printf("\nCase 8: %2.2f",n);
}
