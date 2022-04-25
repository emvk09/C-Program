// Main concept: sorted and unsorted array; unsorted array outer loop; sorted inner loop; unsorted value copied copied to temp in each outer loop;
// inner loop right shifting of sorted array; theoritically sorted array incremented and unsorted array decremented  

#include<stdio.h>
void insertionsort(int [], int);

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", & size);
    int array[size];
    
    printf("Enter the elements: \n");
    for(i= 0; i< size; i++)
        scanf("%d", & array[i]);
    
    insertionsort(array, size);

    printf("The sorted arrray is: ");
    for(i= 0; i< size; i++)
        printf("%d ", array[i]);

    return 0;
}

void insertionsort(int arr[], int n)
{
    int i, j, temp;
    for(i= 1; i< n; i++)
    {
        temp= arr[i];
        for(j= i- 1; arr[j]> temp && j>= 0; j--)
            arr[j+ 1]= arr[j]; //this is right shifting. Thus when arr[j] is copied to arr[j+1], arr[j] will be the vaccant space for '?'
            // j--;
        arr[j+ 1]= temp; //the loop stops at the correct point of insertion, ie, at j. However j gets decremented in the for loop. So..
    }
}