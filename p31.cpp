#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=10;
    printf("prime no are");
    for (i=2;i<=10;i++)
    {
        int f=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            printf("%d",i);
        }
    }
    getch();
}