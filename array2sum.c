#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    int num1[n],num2[n],num3[n];

    // Enter loop 1

    printf("Enter the 1st array elements:\n");
    for (i=1;i<=n;i++)
    {
         scanf("%d",&num1[i]);
    }

    // Enter loop 2

    printf("Enter the 2nd array elements:\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&num2[i]);
    }

    // Return loop 

    printf("The sum of two array elements is:\n");
    for (i=1;i<=n;i++)
    {
        num3[i]=num1[i]+num2[i];
        printf("%d\n",num3[i]);
    }
    getch();
}