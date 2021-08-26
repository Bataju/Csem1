#include<stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("enter month number:");
    scanf("%d", &month);
    switch(month)
    {
        case 1:
        printf("baisakh");
        break;

        case 2:
        printf("jestha");
        break;

        case 3:
        printf("ashar");
        break;

        case 4:
        printf("shrawan");
        break;

        case 5:
        printf("bhadra");
        break;

        case 6:
        printf("ashoj");
        break;

        case 7:
        printf("kartik");
        break;

        case 8:
        printf("mangsir");
        break;

        case 9:
        printf("paush");
        break;

        case 10:
        printf("magh");
        break;

        case 11:
        printf("falgun");
        break;
        
        case 12:
        printf("chaitra");
        break;

        default:
        printf("invalid month number");
        break;
    }
    getch();5
    return 0;
}