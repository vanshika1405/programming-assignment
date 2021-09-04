#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    a%2?printf("odd"):printf("even");
    getch();
}