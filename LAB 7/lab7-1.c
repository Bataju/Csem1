//A program to create a function that adds an integer and a float

#include<stdio.h>
#include<conio.h>

float add(float x, int y)
{
    float sum=x+y;
    return sum;
}

int main()
{
    float num1;
    int num2;
    printf("Enter a float number: ");
    scanf("%f",&num1);
    printf("Enter an integer number: ");
    scanf("%d",&num2);
    printf("Sum: %.2f",add(num1,num2));
    getch();
    return 0;
}