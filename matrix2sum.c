#include<stdio.h>
int main()
{
    int i, j, x, y;
    printf("\nEnter the rows: ");
    scanf("%d", & x);
    printf("Enter the columns: ");
    scanf("%d", & y);
    int mat1[x][y], mat2[x][y], sum[x][y];

    // Enter loop 1

    for(i= 0; i< x; i++)
    {
        printf("Enter elements in row %d of 1st Matrix:\n", i);
        for(j= 0; j< y; j++)
        {
            scanf("%d", & mat1[i][j]);
        }
    }

    // Enter loop 2

    for(i= 0; i< x; i++)
    {
        printf("Enter elements in row %d of 2nd Matrix:\n",i);
        for(j= 0; j< y; j++)
        {
            scanf("%d", & mat2[i][j]);
        }
    }

    // Return loop

    printf("The sum of the matrices is: \n");
     for(i= 0; i< x; i++)
    {
        for(j= 0; j< y; j++)
        {
           sum[i][j]= mat1[i][j]+ mat2[i][j];
           printf("sum[%d][%d]= %d \t", i, j, sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}