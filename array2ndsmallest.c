// FINDING 2nd SMALLEST USING BUBBLESORT

#include<stdio.h>
int main()
{
    int  n, i, j, temp=0;
    printf("\n Enter the size of array: ");
    scanf("%d", & n );
    int arr[n];
    printf("Enter the array elements:\n");

    // ENTER LOOP

    for(i= 0; i< n; i++)
    {
        scanf("%d", & arr[i]);
    }

    // RETURN LOOP FOR ACSENDING ORDER

    for(i= 0; i< n; i++)
    {
        for(j= i+1; j< n; j++)
        {
            if ( arr[i] >= arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

    // PRINTING 2nd ELLEMENT OF THE ARRRANGED ARRAY

    printf("\n The 2nd smallest element is %d",  arr[1]);
    return 0;
}

