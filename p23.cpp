#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,temp,sum=0;
    printf("enter a no");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
       r=n%10;
       printf("%d",r);
       sum=sum*10+r;
      n= n/10;
      
    }
      if(sum==temp)
      {
          printf("pallindrome");
      }
      else
      {
          printf("non pallindrome");
      }
     
    getch();
}
