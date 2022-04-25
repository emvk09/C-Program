// choose any element as pivot; partition the array; elements lesser to pivot element goes left side; greater than pivot element goes to right side

#include<stdio.h>

void swap(int *, int *);
void quicksort(int [], int, int);

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", & size);
    int array[size];
    
    printf("Enter the elements: \n");
    for(i= 0; i< size; i++)
        scanf("%d", & array[i]);

    quicksort(array, 0, size- 1);

    printf("The sorted arrray is: ");
    for(i= 0; i< size; i++)
        printf("%d ", array[i]);

    return 0;
}

void quicksort(int arr[], int lb, int ub)
{
    if(lb< ub)
    {
        int pivot, start, end;
        pivot= lb;
        start= lb;
        end= ub;
        while (start< end)
        {
            while(arr[start]<= arr[pivot])
                start++;
            while(arr[end]> arr[pivot])
                end--;
            if(start< end)
                swap(&arr[start], &arr[end]);
        }
        swap(&arr[pivot], &arr[end]);
        quicksort(arr, lb, end- 1);
        quicksort(arr, end+ 1, ub);
    }
}

void swap(int *x, int *y)
{
    int temp= *x;
    *x= *y;
    *y= temp;
}