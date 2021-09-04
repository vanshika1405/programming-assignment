#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=0;
    printf("enter a no");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("non prime");
    }
    else
    {
        printf("prime");
    }
    getch();
}