#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i=0,j,result;
    int a;
    int sum=0;
    float mean=0.0;
    char read[20],no[20]="NO";
    for (j=0;j<5;j++)
    {
        printf("Enter an integer: ");
        scanf("%d",&a);
        if(a>1 && a<100 && a%9==0 && a%6!=0)
        {
            sum += a;
            i++; 
            mean = sum / i;
        }
    }
    printf("Enter NO if you want to stop or anything to continue: ");
    scanf("%s", read);
    while(strcmp(read, no)!=0)
    {
        printf("Enter an integer: ");
        scanf("%d", &a);
        if(a>1 && a<100 && a%9==0 && a%6!=0)
        {
            sum += a;
            i++; 
            mean = sum / i;
        }
        printf("Enter NO if you want to stop or anything to continue: ");
        scanf("%s",read);
    }
    if(sum == 0)
    printf("NO RESULTS TO DISPLAY..");
    else
    printf("Sum = %d and mean = %f", sum,mean);  
}