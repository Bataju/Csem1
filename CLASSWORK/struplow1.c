//A function to change uppercase to lowercase and viceversa and also count the number of characters and words

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void func(char s[], int *c, int *l)
{
	*l = strlen(s);
	for(int i=0;i<*l;i++)
	{
		if(s[i] == ' ')
			*c+=1;
		if(islower(s[i]))
			s[i]=toupper(s[i]);
		else
			s[i]=tolower(s[i]);
	}
}

void main()
{
	char str[100];
	int count=0,length=0;
	printf("Enter the string: \n");
	gets(str);
	func(str, &count, &length);
	printf("%s",str);
	printf("\nThe number of characters is %d",length);
	printf("\nThe number of words is %d",count+1);
}
