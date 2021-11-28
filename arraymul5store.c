#include<stdio.h>
#include<conio.h>                                         
void main()
{
    int size, i, stor[50], j;
    printf("\nEnter the size of the array: ");
    scanf("%d", & size);
    int arr[size];
    printf("Enter the numbers to be checked for multiples of 5: \n");
    for(i= 0; i< size; i++)
    {
        scanf("%d", & arr[i]);
    }
    for(i= 0, j=0; i< size; i++)
    {
        if(arr[i] % 5 == 0)     /*Here the multiples of 5 are copied to STOR array*/
        {                          
            stor[j]= arr[i];
            j++; 
        }
    } 
    printf("The new array is:\n");
    for(i= 0; i< j ;i++)
    {
        printf("%d\t", stor[i]);
    }
    getch();
}