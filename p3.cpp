#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b, add,sub,multiply,modulus;
    float divide;
    printf("enter 2 no.");
    scanf("%d\t%d",&a,&b);
    add=a+b;
    sub=a-b;
    multiply=a*b;
    divide=a/b;
    modulus=a%b;
  printf("addition,subtraction,multiplication,division,modulus=%d\t%d\t%d\t%f\t%d",add,sub,multiply,divide,modulus);
getch();
}
