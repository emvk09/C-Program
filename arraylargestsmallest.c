#include<stdio.h>
int main()
{
    int n, num[20], i;
    printf("\n Enter the size of array:\t");
    scanf("%d",&n);
    printf("Enter the elements:\n");

// INPUT LOOP

    for (i=0;i<n;i++)
    {
        scanf("%d",& num[i]);
    }

// OUTPUT LOOP

// largest condition

    for (i=0;i<n;i++)
    {
        if (num[0]<=num[i])
        {
            num[0]=num[i];
        }
    }
    printf("The largest the of array elements is %d .",num[0]);

// smallest contidition

    for (i=0;i<n;i++)
    {
        if (num[0]>=num[i])
        {
            num[0]=num[i];
        }
    }
    printf("\n The smallest the of array elements is %d .",num[0]);
    return 0;
}

