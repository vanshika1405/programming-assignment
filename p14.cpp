#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,av;
    int i;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        
      av=tolower(ch);
        printf("%c is upper case",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        av=toupper(ch);
        printf("%c is lower case",ch);
    }
    else
    {
        printf("%c digit or symbol",ch);
    }
    printf("\n%c is converted",av);
    getch();
}
