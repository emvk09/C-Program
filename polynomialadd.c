#include<stdio.h>
#include <math.h>
#define N 10
float add (float[], float[], int, int);

int main()
{
    int deg1, deg2, i;
    float pol1[N], pol2[N];
    printf("Enter the degree of the 1st polynomial: ");
    scanf("%d", & deg1);
    printf("Enter the degree of the 2nd polynomial: ");
    scanf("%d", & deg2);
    printf("Enter the coefficients of the 1st polynomial from the lowest order: \n");
    for(i= 0; i<= deg1; i++)
        scanf("%f", & pol1[i]);
    printf("Enter the coefficients of the 2nd polynomial from the lowest order: \n");
    for(i= 0; i<= deg2; i++)
        scanf("%f", & pol2[i]);

    add (pol1, pol2, deg1, deg2);
}

float add (float arr1[], float arr2[], int d1, int d2)
{
    int j, mindeg, maxdeg, resdeg;
    maxdeg= (d1 > d2) ? d1: d2;
    mindeg= (d1 < d2) ? d1: d2;

    resdeg= maxdeg;

    if (d1 == d2)
    {
        for (j= maxdeg; j> 0; j--)
        if (arr1[j] == -arr2[j])
            resdeg--;
        else
            break;
    }

    float respol [resdeg + 1];

    for(j= 0; j<= mindeg; j++)
        respol[j]= arr1[j]+ arr2[j];
    
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
    for(j= 0; j<= resdeg; j++)
        printf("%.2f\t", respol[j]);
    
    return 0;
}