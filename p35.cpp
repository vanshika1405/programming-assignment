#include<stdio.h>
#include<conio.h>
void main()p
{
    int hrs,sec,min;
    printf("enter time in sec");
    scanf("%d",&sec);
    hrs=sec/3600;
    min=(sec-(3600*hrs))/60;
    printf("time in hrs=%d\n time in min=%d\n",hrs,min);
    getch();
}
