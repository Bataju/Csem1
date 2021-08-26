//Write a program to ask who is the pm of Nepal and print GOOD if the answer is correct. Print try again if the answer is incorrect and print the correct answer if the user fails to answer even at the third attempt.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{
	char pm[50];
	for(int i=0;i<3;i++)
	{
		printf("Name the prime minister of Nepal: ");
		gets(pm);
		for(int j=0;j<strlen(pm);j++)
		{
		    pm[j] = toupper(pm[j]);
		}

		if(strcmp(pm, "SHER BAHADUR DEUBA")==0)
		{
			printf("GOOD!!");
			break;
		}
		else
		{
			if(i==2)
				printf("YOU LOSE!!\nThe correct answer is Sher Bahadur Deuba");
			
			else
				printf("TRY AGAIN!!\n");
		}
	}
}