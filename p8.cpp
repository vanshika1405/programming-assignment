#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float area,diagonal,perimeter,l,b;
printf("enter l \n enter b");
scanf("%f\n%f",&l,&b);
area=l*b;
diagonal=sqrt(l*l+b*b);
perimeter=2*(l+b);
printf("area,\ndiagonal,\nperimeter is %f\n%f\n%f",area,diagonal,perimeter);
getch();
}

