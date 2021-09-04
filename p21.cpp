#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1;
    printf("enter a no");
    scanf("%d",&n);
    while(n>1)
    {
        f=f*n;
        n--;
    }
    printf("%d",f);
    getch();
}