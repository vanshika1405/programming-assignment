#include<stdio.h>
#include<conio.h>
void main ()
{
    float p,a,r;
    printf("enter radius of circle");
    scanf("%f",&r);
    p=2*3.14*r;
    a=3.14*r*r;
    printf("perimeter and area is=%f\t%f",p,a);
    getch();
}
