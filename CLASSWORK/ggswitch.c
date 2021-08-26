#include<stdio.h>
#include<conio.h>
int main()
{
    char operator;
    float operand1,operand2;
    float result;
    printf ("enter the operator: ");
    scanf(" %c", &operator);
    printf("enter the two numbers:");
    scanf("%f%f", &operand1,&operand2);
    switch(operator)
    {
        case '+':
        printf("Sum : %f + %f = %f", operand1, operand2, operand1+operand2);
        break;

        case '-':
        printf("Difference : %f + %f = %f", operand1, operand2, operand1-operand2);
        break;

        case '*':
        printf("Product : %f * %f = %f", operand1, operand2, operand1*operand2);
        break;

        case '/':
        printf("Quotient : %f / %f = %f", operand1, operand2, operand1/operand2);
        break;

        default:
        printf("enter a valid operator");
        break;
    

    }
    return 0;
}
