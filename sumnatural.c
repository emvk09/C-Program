#include<stdio.h>
int main()
{
    int a, i, sum= 0;
    printf("\nEnter the number of elements: ");
    scanf("%d",&a);
    for(i= 0; i<= a; i++)
    {
        sum=sum + i;
    }
    printf("The sum of first %d integers is %d", a, sum);
    return 0;
}