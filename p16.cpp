#include<stdio.h>
#include<conio.h>
void main()
{
    float percentage,result;
    int total,chem,phy,m1,ed,beee;
    printf("chem,\nphy,\nm1,\ned,\nbeee");
    scanf("%d\n%d\n%d\n%d\n%d",&chem,&phy,&m1,&ed,&beee);
    total=chem+phy+m1+ed+beee;
    percentage=total/5;
    printf("total=%d",total);
    printf("percentage=%f",percentage);
   result=percentage;
   result>75?printf("\n1st class"):printf("\n2nd class");
getch();
}