#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,c,root1,root2,det,real,imag;
    int case_check;
    printf("Enter the value a,b and c : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nThe quadratic equation is %fx^2 + %fx + %f", a,b,c);
    det = b*b-4*a*c;
    if(det == 0)
    {
        case_check = 0;
        printf("\nThe solutions are real and equal..");
    }
    else if(det > 0)
    {
        case_check = 1;
        printf("\nThe roota are real and unequal..");
    }
    else{
        case_check = 2;
        printf("\nThe roots are imaginary and unequal..");
    }
    switch(case_check)
    {
        case 0:
        root1 = -b / (2 * a);
        printf("\nThe only solution is %f",root1);
        break;

        case 1:
        root1 = (-b + sqrt(det)) / (2*a);
        root2 = (-b - sqrt(det))/ (2*a);
        printf("\nThe roots are: %f and %f", root1, root2);
        break;

        case 2:
        det = -det;
        real = -b / (2*a);
        imag = sqrt(det) / (2*a);
        printf("\nThe roots are: %f + %fi and %f - %fi", real,imag,real,imag);
        break;

        default:
        printf("\nEnter a valid quadratic equation..");
        break;
    }
    getch();
}