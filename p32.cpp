#include<stdio.h>
#include<conio.h>
void main()
{
    int h, f, t, a, s;
    printf("enter the number of notes earned in denominations of 100\n");
    scanf("%d", &h);
    h=h*100;
    printf("enter the number of notes earned in denominations of 50\n");
    scanf("%d", &f);
    f=f*50;
    printf("enter the number of notes earned in denominations of 20\n");
    scanf("%d", &t);
    t=t*20;
    printf("enter the number of notes earned in denominations of 10\n");
    scanf("%d", &s);
    s=s*10;
    a=h+f+t+s;
    printf("total money earned in a day = %d rupees", a);
    getch();
}

