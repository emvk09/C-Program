#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, x, y;
    printf("\nEnter the rows: ");
    scanf("%d", & x);
    printf("Enter the columns: ");
    scanf("%d", & y);
    int mat[x][y];
    for(i= 0; i< x; i++)
    {
        printf("Enter elements in row %d: \n", i);
        for(j= 0; j< y; j++)
        {
            scanf("%d", & mat[i][j]);
        }
    }
    printf("\nThe transpose of the matrix is: \n");
     for(i= 0; i< y; i++)
    {
        for(j= 0; j< x; j++)
        {
            printf("mat[%d][%d]= %d \t", j, i, mat[j][i]);
        }
        printf("\n");
    }
    getch();
}