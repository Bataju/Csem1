#include<stdio.h>
#include"varextent1.h"


int isEven(int n);//needs to be declared to be further used 

int main(void)
{
    if(isEven(11)==1)
        printf("even");
    else
        printf("odd");
return 0;
}