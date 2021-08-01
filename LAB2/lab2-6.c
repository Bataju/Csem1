//A program to convert centigrade measure to fahrenheit measure.

#include<stdio.h>
#include<conio.h>

void main()
{
    float cent,fahr;
    printf("Enter centigrade measure: ");
    scanf("%f",&cent);
    fahr = 1.8 * cent + 32;
    printf("\nThe fahrenheit measure of the given temperature is %f F.",fahr);
    getch();
}
