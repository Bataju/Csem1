//2. WAP to convert lowercase characters to uppercase and vice versa in a string just entered by the user and also find the number of words

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int i=0,j,count=0;
    char name[100],ch;
    printf("Enter names having both uppercase and lowercase characters\n");
    do
    {
        ch=getchar();
        if(ch=='\n')
        name[i]='\0';
        else
        name[i]=ch;
        if (name[i]==' ')
        count++;
        i++;

    } while (ch!='\n');

    for(j=0;j<i;j++)
    {
        if(islower(name[j]))
        name[j]=toupper(name[j]);
        else
        name[j]=tolower(name[j]);
    }
    for(j=0;j<i;j++)
        // puts(name[j]);   this doesn't work because puts works in string, not in character
        printf("%c",name[j]);

    printf("\nThe total number of words is: %d\n",count+1);

return 0;
}