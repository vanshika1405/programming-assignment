#include<stdio.h>
#include<math.h>
void main()
{
    int choice, l, b, ar, pr, di;
    printf("enter 1 for area\n");
    printf("enter 2 for perimeter\n");
    printf("enter 3 for diagonal\n");
    printf("input your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("area\n");
        printf("enter l and b");
        scanf("%d\n%d", &l, &b);
        ar=l*b;
        printf("area = %d",ar);
        break;
        case 2: printf("perimeter\n");
        printf("enter l and b");
        scanf("%d\n%d", &l, &b);
        pr=2*(l+b);
        printf("perimeter = %d",pr);
        break;
        case 3: printf("diagonal\n");
        printf("enter l and b");
        scanf("%d\n%d", &l, &b);
        di=sqrt(l*l+b*b);
        printf("diagonal = %d",di);
        break;
        default: printf("invalid");
    }
    getch();
}
