//Write a program to read name of 10 students in main, pass the name list to a function that sorts the array in ascending order. Display the sorted array from main.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort_array(char s[10][50]);

void main()
{
	char list_of_name[10][50];
	printf("Enter the name of 10 students: ");
	for(int i=0;i<10;i++)
	{
		gets(list_of_name[i]);
	}
	sort_array(list_of_name);
	printf("The sorted array: ");
	for(int i=0;i<10;i++)
	{
		printf("\n");
		printf("%s", list_of_name[i]);
	}
}

void sort_array(char s[10][50])
{
	int j=0;
	char temp[50];
	for(int i=0;i<9;i++) //9 because it runs till index i=8 and compares with index i=9 which is the 10th name
	{
		for(int j=i+1;j<9;j++)
		{
			if(strcmp(s[i],s[j])>0) //if str1>str2 swap
			{
				strcpy(temp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], temp);
			}
		}
	}
}