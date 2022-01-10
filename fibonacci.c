#include<stdio.h>
int main()
{
    int num,ini=0,fin=1,i,ans;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("The first %d Fibonacci series are:\n",num);
    if (num == 1)
        printf("%d", ini);
    else if (num != 0)
        printf("%d %d", ini, fin);

    for(i= 3; i<= num; i++)
    {
        ans= ini + fin;
        printf(" %d", ans);
        ini= fin;
        fin= ans;
    }
    return 0;
}
