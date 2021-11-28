#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    printf("Enter the size of array:\t");
    scanf("%d", & n);
    int num[n];
    printf("Enter the elements:\n");
    for (i= 1; i<= n; i++)
    {
        scanf("%d", & num[i]);
    }
    printf("The reverse order of the array is:\n");
    for (i= n; i> 0; i--)
    {
        printf("%d\n", num[i]);
    }
    getch();
}