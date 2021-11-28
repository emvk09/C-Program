#include<stdio.h>
int main()
{
    int row, i, j, one= 1;
    printf("\nEnter the rows required: ");
    scanf("%d", & row);

    // OUTER LOOP FOR NEW LINES                              

    for (i= 0; i< row; i++)
    {
        printf("\n");

        // INNER LOOP FOR PRINTING STAR     (INORDER TO GET NUMBERS, REPLACE * with %d of j)
        for(j= 0; j<= i; j++)
        {
            printf("%d ", one);
            one= one+ 1;
        }
    }
    return 0;
}