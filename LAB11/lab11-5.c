//A program to compute any two instant memory spaces in a format (Kilobytes: Bytes: Bits) using structure.
//Build functions to add and subtract the given memory spaces.

#include<stdio.h>
#include<conio.h>

struct memory_spaces
{
	int kilobytes;
	int bytes;
	int bits;
};

void add_and_subtract(struct memory_spaces, struct memory_spaces, int [], int []);
//arrays are basically pointers so changes made in the function (i.e. here in the memory location) are permanent and visible in main function

void main()
{
	struct memory_spaces m1, m2;
	int sum[3], difference[3];

	printf("First memory space.");
	printf("\nEnter the kilobytes: ");
	scanf("%d",&m1.kilobytes);
	printf("\nEnter the bytes: ");
	scanf("%d",&m1.bytes);
	printf("\nEnter the bits: ");
	scanf("%d",&m1.bits);

	printf("Second memory space.");
	printf("\nEnter the kilobytes: ");
	scanf("%d",&m2.kilobytes);
	printf("\nEnter the bytes: ");
	scanf("%d",&m2.bytes);
	printf("\nEnter the bits: ");
	scanf("%d",&m2.bits);

	add_and_subtract(m1, m2, sum, difference);

	printf("\nFirst memory space");
	printf("\n%10d kilobytes %10d bytes %10d bits", m1.kilobytes, m1.bytes, m1.bits);

	printf("\nSecond memory space");
	printf("\n%10d kilobytes %10d bytes %10d bits", m2.kilobytes, m2.bytes, m2.bits);

	printf("\nSum of spaces");
	printf("\n%10d kilobytes %10d bytes %10d bits", sum[0], sum[1], sum[2]);

	printf("\nDifference of spaces");
	printf("\n%10d kilobytes %10d bytes %10d bits", difference[0], difference[1], difference[2]);
}

void add_and_subtract(struct memory_spaces s1, struct memory_spaces s2, int sum[], int difference[])
{
	int bits_in_m1 , bits_in_m2, sum_of_bits, difference_of_bits;

	bits_in_m1 = s1.kilobytes * 8192 + s1.bytes * 8 + s1.bits;
	bits_in_m2 = s2.kilobytes * 8192 + s2.bytes * 8 + s2.bits;

	sum_of_bits = bits_in_m1 + bits_in_m2;
	difference_of_bits = (bits_in_m1>bits_in_m2)?(bits_in_m1-bits_in_m2):(bits_in_m2-bits_in_m1);

	sum[0] = sum_of_bits / 8192; 
	//only the integer part is stored which is the number of kilobytes

	sum[1] = (sum_of_bits % 8192) / 8; 
	//(sum_of_bits % 8192) is the number of bits remaining after taking the kilobytes out
	//(sum_of_bits % 8192) / 8 dividing the no. of bits remaining by 8 we get the no. of bytes
	//only the integer part is stored which is the number of bytes

	sum[2] = (sum_of_bits % 8192) % 8;
	//(sum_of_bits % 8192) is the number of bits remaining after taking the kilobytes out
	//(sum_of_bits % 8192) % 8 is the number of bits remaining after taking the kilobytes and bytes out

	difference[0] = difference_of_bits / 8192; //stores the number of KB in the difference
	difference[1] = (difference_of_bits % 8192) / 8; //stores the number of B in the difference
	difference[2] = (difference_of_bits % 8192) % 8; //stores the number of bits in the difference
}
