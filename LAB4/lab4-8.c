//A program to display the corresponding day when an integer is taken as an input

#include<stdio.h>
#include<conio.h>

void main()
{
    int day;
    printf("Enter an integer (1 to 7)");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
        {
            printf("Sunday");
            break;
        }
        case 2:
        {
            printf("Monday");
            break;
        }
        case 3:
        {
            printf("Tuesday");
            break;
        }
        case 4:
        {
            printf("Wednesday");
            break;
        }
        case 5:
        {
            printf("Thursday");
            break;
        }
        case 6:
        {
            printf("Friday");
            break;
        }
        case 7:
        {
            printf("Saturday");
            break;
        }
        default:
        {
            printf("Not a valid number..");
            break;
        }
        getch();
    }

}