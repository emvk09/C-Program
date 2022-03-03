#include <stdio.h>
#include <math.h>
#define N 10
int mul(int[], int[], int, int);

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
        printf("y ^ %d: ", i);
        scanf("%d", & pol2[i]);
    }

    mul(pol1, pol2, deg1, deg2);
}

int mul(int arr1[], int arr2[], int d1, int d2)
{
    int j, i, resdeg;

    // find the resultant polynomial degree
    resdeg= d1+ d2;

    // initialising the resultant array
    int respol[resdeg + 1];

    // we need to clear the dump values in the array
    for(j= 0; j<= resdeg; j++)
        respol[j]= 0;

    // storing the multiplied terms to the array
    for(i= 0; i<= d1; i++)
    {
        for(j= 0; j<= d2; j++)
            respol[i+ j] += arr1[i] * arr2[j];  //eg: respol[4]= arr[0]*arr[4] + arr[1]*arr[3] + ....
    }

    printf("\nThe resultant polynomial is:\n");
    for(j= resdeg; j>= 0; j--)
        printf("%dz^%d\t", respol[j], j);

    return 0;
}