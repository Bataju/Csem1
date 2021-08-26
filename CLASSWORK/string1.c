//A program to print nepal pettern

#include<stdio.h>
#include<conio.h>

void main()
{
	char a[]="NEPAL";
	int i=0,j;
	// for(i=0;i<5;i++)
	// {
	// 	for(j=0;j<=i;j++)
	// 	{
	// 		printf("%c",*(a+j));
	// 	}
	// 	printf("\n");
	// }
	do{
		j=0;
		while(j<=i)
		{
			printf("%c",a[j]);
			j++;
		}
		i++;
		printf("\n");
	}while(a[i]!='\0');
}