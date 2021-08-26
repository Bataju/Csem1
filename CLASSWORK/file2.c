#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *sfp, *dfp; //a file pointer
	char sfname[40],dfname[40],ch;
	printf("Enter the source file name: ");
	gets(sfname);
	printf("Enter destination file name: ");
	gets(dfname);
	sfp = fopen(sfname, "w");
	fprintf(sfp,"Hasta la vista baby");
	fclose(sfp);

	sfp=fopen(sfname, "r");//creates file in the current folder when destination is not specified
	dfp=fopen(dfname, "w");
	if(sfp == NULL || dfp==NULL)
	{
		fprintf(stderr, "This file cannot be opened"); 
		exit(0);
	}

	while(1)
	{
		ch = fgetc(sfp); 
		if(ch==EOF)
			break;
		else 
			fputc(ch, dfp);
	}
	fclose(sfp);
	fclose(dfp);

	dfp = fopen(dfname,"r");
	while(1)
	{
		ch = fgetc(dfp); 
		if(ch==EOF)
			break;
		else 
			putchar(ch); //print to screen
	}
	fclose(dfp);
}