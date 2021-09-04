#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,count=0;
    printf("enter a no");
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       sum=sum+r;
      n= n/10;
      count++;
    }
    printf(" sum is%d",sum);
    printf(" \ncount is%d",count);
    getch();
}
      