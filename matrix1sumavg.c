#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, x, y, sum= 0, avg;
    printf("\nEnter the rows: ");
    scanf("%d", & x);
    printf("Enter the columns: ");
    scanf("%d", & y);
    int mat[x][y];

    // Enter loop 

    for(i= 1; i<= x; i++)
    {
        printf("Enter elements in row %d: \n", i);
        for(j= 1; j<= y; j++)
        {
            scanf("%d", & mat[i][j]);
        }
    }

    // Return loop

     for(i= 1; i<= x; i++)
    {
        for(j= 1; j<= y; j++)
        {
           sum= sum+ mat[i][j];
        }
    }
    avg= sum / (x*y);
    printf("Sum of all the elements in matrix = %d and average is = %d", sum, avg);
    getch();
}