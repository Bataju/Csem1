#include<stdio.h>
//static demo run with and without static

int func()
{
    int i=0;
    i++;
    printf("%d\t",i);
    return 0;
}
void main()
{
    func();
    func();
    func();
}