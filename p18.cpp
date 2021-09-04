#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter a no");
    scanf("%d",&a);
    switch(a%2)
{
    case 1:printf("odd");break;
    case 0:printf("even");break;
    default:printf("invalid");
}
if(a%b==0)
{
    printf("divisible");
}
else
{
    printf("non divisible");
}

getch();
}