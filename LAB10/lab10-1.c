//Run the following program and observe the output

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i;
	char name1[]="pokhara city";
	char name2[]={'k','a','t','h','m','a','n','d','u',' ','c','i','t','y','\0'};
	for(i=0;i<strlen(name1);i++)
		printf("%c\n",name1[i]);
	for(i=0;i<strlen(name2);i++)
		printf("%c\t",name2[i]);
	getch();
}