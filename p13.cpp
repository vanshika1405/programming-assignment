#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,x;
    printf("enter 2 no");
    scanf("%d\n%d",&a,&b);
    x=a&b;
    printf("\n%d",x);
    x%2?printf("\nodd"):printf("\neven");
    printf("\n%d",x);p
    x=++x;
    printf("\n%d",x);
    getch();
}