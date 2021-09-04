//without temp. variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter 2 no to be swaped");
    scanf("%d\n%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d b=%d",a,b);
    getch();
    
}
//with temp variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,f;
    printf("enter 2 no");
    scanf("%d\n%d",&a,&b);
    f=a;
    a=b;
    b=f;
    printf("a=%d b=%d",a,b);
    getch();
}