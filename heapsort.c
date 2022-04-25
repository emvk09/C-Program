#include<stdio.h>

void heapsort(int [], int);
void maxHeapify(int [], int, int);
void swap(int *, int *);

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", & size);
    int array[size];
    
    printf("Enter the elements: \n");
    for(i= 0; i< size; i++)
        scanf("%d", & array[i]);

    heapsort(array, size);

    printf("The sorted arrray is: ");
    for(i= 0; i< size; i++)
        printf("%d ", array[i]);

    return 0;
}

void heapsort(int arr[], int n)
{
    for(int i= (n/2)- 1; i>= 0; i--)   //building heap
        maxHeapify(arr, n, i);      
    for(int i= n- 1; i>= 0; i--)          //deleting heap
    {
        swap(&arr[0], &arr[i]);
        maxHeapify(arr, i, 0);
    }
}

void maxHeapify(int arr[], int n, int i)
{
    int largest= i;
    int l= (2*i)+ 1;
    int r= (2*i)+ 2;
    if(l< n && arr[l]> arr[largest])
        largest= l;
    if(r< n && arr[r]> arr[largest])
        largest= r;
    if(largest != i)
    {
        swap(&arr[largest], &arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void swap(int *x, int *y)
{
    int temp= *x;
    *x= *y;
    *y= temp;
}