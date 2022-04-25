#include <stdio.h>
#include <math.h>
#define N 10
int add(int[], int[], int, int);

int main()
{
    int deg1, deg2, pol1[N], pol2[N], i;

    printf("Enter the degree of the 1st polynomial: ");
    scanf("%d", & deg1);
    printf("Enter the degree of the 2nd polynomial: ");
    scanf("%d", & deg2);
    printf("Enter the coefficients of the 1st polynomial: \n");
    for(i= deg1; i>= 0; i--)
    {
        printf("x ^ %d: ", i);
        scanf("%d", & pol1[i]);
    }
    printf("Enter the coefficients of the 2nd polynomial: \n");
    for(i= deg2; i>= 0; i--)
    {
        printf("x ^ %d: ", i);
        scanf("%d", & pol2[i]);
    }

    add (pol1, pol2, deg1, deg2);
}

int add(int arr1[], int arr2[], int d1, int d2)
{
    int j, mindeg, maxdeg, resdeg;
    maxdeg= (d1 > d2) ? d1: d2;
    mindeg= (d1 < d2) ? d1: d2;

    // find the resultant polynomial degree
    resdeg= maxdeg;

    if (d1 == d2)
    {
        for (j= maxdeg; j>= 0; j--)
        if (arr1[j] == -arr2[j])
            resdeg--;
        else
            break;
    }

    // initialising the resultant array
    int respol [resdeg + 1];

    // adding upto same no. of terms 
    for(j= 0; j<= mindeg; j++)
        respol[j]= arr1[j]+ arr2[j];

    // copying the remaining terms
    if (d1 >= d2)
    {
        for(j= mindeg+ 1; j<= maxdeg; j++)
            respol[j]= arr1[j];
    }
    else
    {
        for(j= mindeg+ 1; j<= maxdeg; j++)
            respol[j]= arr2[j];
    }

    printf("\nThe sum of the polynomial is:\n");
    for(j= resdeg; j>= 0; j--)
        printf("%dx^%d\t", respol[j], j);

    return 0;
}
