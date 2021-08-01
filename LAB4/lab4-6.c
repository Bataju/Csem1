// A program to determine all the roots of a quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a, b, c, det, x1, x2, real, imag;
    printf("Enter the coordinates of the quadratic equation(a, b, c): ");
    scanf("%f%f%f", &a,&b,&c);
    det = b*b - 4*a*c;
    if (det==0){
        x1 = - b / (2*a);
        printf("The roots are real and equal.");
        printf("\nx1 = x2 = %.2f", x1);
    }
    else if (det > 0){
        x1 = (-b + sqrt(det)) / (2*a);
        x2 = (-b - sqrt(det)) / (2*a);
        printf("The roots are real and unequal.");
        printf("\nx1 = %.2f and x2 = %.2f", x1,x2);
    }
    else{
        det = -det;
        real = -b / (2*a);
        imag = sqrt(det) / (2*a);
        printf("The roots are imaginary and unequal.");
        printf("\nx1 = %.2f+%.2fi and x2 = %.2f-%.2fi",real,imag,real,imag);
    }
    getch();
}