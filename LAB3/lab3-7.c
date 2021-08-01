//A program to illustrate different format specifiers for printing strings

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[20]= "I love Baglung.";
    printf("Case 1: %s",str);
    printf("\nCase 2: %18s",str);
    printf("\nCase 3: %-18s",str);
    printf("\nCase 4: %18.8s",str);
    printf("\nCase 5: %-18.9s",str);
    printf("\nCase 6: %5s",str);
    printf("\nCase 7: %.10s",str);
}