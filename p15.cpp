#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    char op;
    printf("enter the operator");
    scanf("%c",&op);
    printf("enter 2 no");
    
    scanf("%d\n%d",&a,&b);
    
    switch(op)
    {
        case'+':printf("addition\n");
        c=a+b;
        printf("sum=%d\n",c);
        break;
        case'-':printf("subtraction\n");
        c=a-b;
        printf("difference=%d\n",c);
        break;
        case'*':printf("multiplication\n");
        c=a*b;
        printf("product=%d\n",c);
        break;
        case'%':printf("modulus\n");
        c=a%b;
        printf("remainder=%d\n",c);
        break;
        case'/':printf("division\n");
        c=a/b;
        printf("quotient=%d\n",c);
        break;
    default:printf("invalid\n");
    }
        getch();
}
