#include<stdio.h>

void arrDisplay(int [], int);

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int arr[size];
    arrDisplay(arr, size);
    for(int i= 0; i< size; i++)
        printf("%d ", arr[i]);
    return 0;   
}

void arrDisplay(int a[], int n)
{
    printf("Enter the elements:\n");
    for(int j= 0; j< n; j++)
        scanf("%d", &a[j]);
}