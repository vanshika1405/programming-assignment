#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,sum=0,n;
    float avg;
    printf("enter a no");
    while(i<5)
    {
        
        scanf("%d",&n);
       sum=sum+n;
       i++;
    }
    avg=sum/5;
    printf("sum=%d\n avg=%.2f",sum,avg);
    getch();
}