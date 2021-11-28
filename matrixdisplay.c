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
    for(i=1;i<=x;i++)
    {
        printf("Enter elements in row %d: \n", i);
        for(j= 1; j<= y; j++)
        {
            scanf("%d", & mat[i][j]);
        }
    }
     for(i= 1; i<= x; i++)
    {
        for(j= 1; j<= y; j++)
        {
            printf("mat[%d][%d]= %d \t", i, j, mat[i][j]);
        }
        printf("\n");
    }
    getch();
}