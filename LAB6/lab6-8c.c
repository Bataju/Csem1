//A program to print a pattern
/*N
  E E
  P P P
  A A A A
  L L L L L*/


#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,length=0;
    char word[30];
    printf("Enter a word: ");
    gets(word);

    //find the length of the entered string and changing to uppercase
    //string ends with a null character i.e. \0
    //ASCII value of a and z are 97 and 122
    //32 is the difference between A-65 and a-97
    
    i=0;
    while(word[i]!='\0')
    { 
        length++;
        if(word[i]>=97 || word[i]<=122)
            word[i]=word[i]-32;
        i++;
    }
    
    //loop for displaying pattern
    for(i=0;i<length;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c ",word[i]);
        printf("\n");
    }
}

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
// char word[]="NEPAL";
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         printf("%c ",word[i]);
//     }
//     printf("\n");
// }
// }