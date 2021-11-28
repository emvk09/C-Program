// Without FUNCTIONS

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, sum= 0, avg;
    printf("\n Enter the size of array:\t");
    scanf("%d", & n);
    int num[n];

    // Enter loop 

    printf("\n Enter the elements:\n");
    for (i= 0; i< n; i++)
    {
        scanf("%d", & num[i]);
    }

    // Return loop

    for (i= 0; i< n; i++)
    {
        sum= sum+ num[i];
    }
    avg= sum/ n;
    printf("The sum of the array elements is %d .", sum);
    printf("The average of the array elements is %d .", avg);
    getch();
}



// //  Using FUNCTIONS 

// // When using functions, find all the variables used in the return loop. Out of those, check for the variables that are used from the 
// // starting of the program. These variables are kept as the arguments of the functions. But we can use different names for that.

// #include<stdio.h>
// #include<conio.h>
// int fun(int [], int);                       /*function declaration*/
                        
// void main()
// {
//     int n, i, avg; 
//     printf("\n Enter the size of array: ");
//     scanf("%d", & n);
//     int arr[n];

//     // Enter loop

//     printf("\n Enter the elements:\n");
//     for (i=0; i< n; i++)
//     {
//         scanf("%d", & arr[i]);         
//     }
//     fun(arr, n);                                 /*function call*/
//     avg= fun(arr, n)/ n;
//     printf("The sum is: %d \n", fun(arr, n));
//     printf("The average is: %d \n", avg);
//     getch();
// }

// int fun(int brr[], int b)                        /*function definition*/
// {
//     int j, sum= 0;

//     //Return loop

//     for (j= 0; j< b; j++)
//     {
//         sum= sum+ brr[j];
//     }
//     return sum;
// }