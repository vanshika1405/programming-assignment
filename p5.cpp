#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,t,amount,si,ci;
    printf("enter p,r,t");
    scanf("%f\n%f\n%f",&p,&r,&t);
    si=p*r*t/100;
    amount=p*(pow((1+r/100),t));
    ci=amount-p;
    printf("si and ci =%f\n%f",si,ci);
    getch();
    
}