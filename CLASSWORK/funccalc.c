#include<stdio.h>
#include<conio.h>

float add(float x,float y)
{
    return(x+y);
}
float sub(float x,float y)
{
    return(x-y);
}
float mult(float x,float y)
{
    return(x*y);
}
float div(float x,float y)
{
    return(x/y);
}

int main()
{
    char option;
    do
    {
        char ch;
        float a,b;
        printf("Enter any two numbers: ");
        scanf("%f%f",&a,&b);
        printf("Enter an operator: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case '+':
            {
                printf("Sum: %f",add(a,b));
                break;
            }
            case '-':
            {
                printf("Difference: %f",sub(a,b));
                break;
            }
            case '*':
            {
                printf("Product: %f",mult(a,b));
                break;
            }
            case '/':
            {
                printf("Quotient: %f",div(a,b));
                break;
            }
            default:
            {
                printf("It is not a valid operator");
            }
        }
            printf("\nEnter e if you want to exit or anything to continue.");
            scanf(" %c",&option);
    }while(option != 'e');
    getch();
}