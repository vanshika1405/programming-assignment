#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a year");
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("leap year");
    }
    else if(a%100==0)
{
    printf("non leap year");

}
else if(a%4==0)
{
    printf("leap year");
}
else
{
    printf("non leap year");
}
getch();
}