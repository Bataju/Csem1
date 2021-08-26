//  sort the strings in ascending order


#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char list_of_name[5][100],temp[100];
	int i,j;
	printf("Enter the strings\n");
	for(i=0;i<5;i++)
	{
		gets(list_of_name[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(strcmp(list_of_name[j],list_of_name[j+1])>0) //is > 0 if Ascii of list_of_name[j] is greater than that of j+1
			{
				strcpy(temp, list_of_name[j]);
				strcpy(list_of_name[j],list_of_name[j+1]);
				strcpy(list_of_name[j+1],temp);
			}

		}
	}
	printf("\nSorted string\n");
	for(i=0;i<5;i++)
		puts(list_of_name[i]);
}