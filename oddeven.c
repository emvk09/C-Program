#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is an even number.");
    else
    printf("%d is an odd number.");
    return 0;
}