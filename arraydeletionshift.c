#include<stdio.h>
#include<conio.h>    
#include<stdlib.h>
                                    /*HERE size AND pos IS CONSIDERED FROM 1 TO ....
                                    BUT index, i IS CONSIDERED FROM 0 TO ....*/
void main()
{
    int size, pos, i;
    printf("\nEnter the size of the array: ");
    scanf("%d", & size);
    int arr [size];
    printf("Enter the elements: \n");
    for(i= 0; i< size; i++)
    {
        scanf("%d", & arr[i]);
    }
    printf("Enter the positon you want to delete:");
    scanf("%d", & pos);

// To terminate the program if invalid position is entered

    if(pos<= 0 || pos> size)
    {
        printf("Invalid position. Run the program again.\n");
        exit(0);
    }

// Working part

    else
    {
        for(i= pos-1; i< size; i++)
        {
            arr[i]= arr[i+1];  /*Here we  are rewriting the ith element with the next element and there is no actual deletion*/
        }
    }
    size--;            /*This reduces the size of the array by deleting the last element*/      
    printf("The resulting array is:\n");
    for(i= 0; i< size; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
}