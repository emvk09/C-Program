#include<stdio.h>

void mergesort(int [], int, int);
void merge(int [], int, int, int);

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", & size);
    int array[size];
    
    printf("Enter the elements: \n");
    for(i= 0; i< size; i++)
        scanf("%d", & array[i]);

    mergesort(array, 0, size- 1);

    printf("The sorted arrray is: ");
    for(i= 0; i< size; i++)
        printf("%d ", array[i]);

    return 0;
}

void mergesort(int arr[], int lb, int ub)
{
    if(lb< ub)
    {
        int mid;
        mid= (lb+ ub)/2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid+ 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k, b[ub];
    i= lb;
    j= mid+ 1;
    k= lb;

    while(i<= mid && j<= ub)  //compares the 2 final sorted arrays and copies their values accordingly to b[]
    {
        if(arr[i]<= arr[j])
        {
            b[k]= arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]= arr[j];
            j++;
            k++;
        }
    }
    if(i> mid)         //if the 1st sorted array is already exhausted, then the remaining values in the 2nd sorted array must be copied to b[]
    {
        while(j<= ub)
        {
            b[k]= arr[j];
            j++;
            k++;
        }
    }                  
    else          //if the 2nd sorted array is already exhausted, then the remaining values in the ist sorted array must be copied to b[]
    {
        while(i<= mid)
        {
            b[k]= arr[i];
            i++;
            k++;
        }
    }

    //copying array b[] to a[]
    for(k= lb; k<= ub; k++)
        arr[k]= b[k];
}