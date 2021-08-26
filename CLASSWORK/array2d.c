#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,row,col;
	int a[10][10];
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&col);
	printf("Enter the elements of matrix\n");

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("The matrix is: ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
			printf("%d\t",a[i][j]);
	}
}