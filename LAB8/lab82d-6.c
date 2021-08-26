//A program to read members of a 3X3 array in main and find the sum of diagonal elements in a function

#include<stdio.h>
#include<conio.h>

float diag(float b[][3]) //need to pass the number of columns while passing 2darray to a function
{
	int i,j;
	float sum = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				sum+=b[i][j];
		}
	}
	return sum;
}

void main()
{
	int i,j;
	float a[3][3];
	printf("Enter the elements of the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Sum of diagonal elements = %f",diag(a));
	getch();
}