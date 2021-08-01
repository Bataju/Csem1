//A basic calculator

#include<stdio.h>
#include<conio.h>

void main()
{
    float num1,num2;
    char op;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    switch(op){
        case '+':
        {
            printf("SUM: %.2f+%.2f=%.2f",num1,num2,num1+num2);
            break;
        }
        case '-':
        {
            printf("DIFFERENCE: %.2f-%.2f=%.2f",num1,num2,num1-num2);
            break;
        }
        case '*':
        {
            printf("PRODUCT: %.2f*%.2f=%.2f",num1,num2,num1*num2);
            break;
        }
        case '/':
        {
            printf("QUOTIENT: %.2f / %.2f = %.2f",num1,num2,num1/num2);
            break;
        }
        default:
        {
            printf("Enter a valid operator..");
            break;
        }
        
    }
}