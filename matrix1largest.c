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
        printf("Enter elements in row %d:\n",i);
        for(j= 0; j< y; j++)
        {
            scanf("%d", & mat[i][j]);
        }
    }
     for(i= 0; i< x; i++)
    {
        for(j= 0; j< y; j++)
        {
           if(mat[0][0] <= mat[i][j])
           {
               mat[0][0] = mat[i][j];
           }
        }
    }
    printf("Largest of all the elements in matrix = %d", mat[0][0]);
    getch();
}