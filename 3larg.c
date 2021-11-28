#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integer numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    {
    printf("%d is the largest among the three.",a);
    }
    else if (b>=c && b>=a)
    {
    printf("%d  is the largest among the three numbers.",b);
    }
    else
    {
    printf("%d is the largest amoung the three.",c);
    }
    return 0;
}
