#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b,c;
    b=++a;
    c=b++;
    printf("%d\n%d\n%d",a,b,c);
    getch();
}