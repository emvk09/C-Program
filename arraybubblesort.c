#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, j, temp=0;
    printf("\nEnter number of elements: ");
    scanf("%d", & n);
    int num[n];
    printf("Enter the list of elements: \n");

    // ENTER LOOP

    for(i= 0; i< n; i++)
    {
        scanf("%d", & num[i]);
    }

    // RETURN LOOP ANALYSING
    
    for(i= 0; i< n; i++)
    {
        for(j= 0; j< n-i-1; j++)
        {
            if ( num[j] >= num[j+ 1])
            {
                temp= num[j];
                num[j]= num[j+ 1];
                num[j+ 1]= temp;
            }
        }
    }

    // RETURN LOOP PRINTING

    printf("The list of elements in asending order is: \n");
    for(i= 0; i < n; i++) 
    {   
        printf("%d \n", num[i]);  
    }  
    getch();
}
