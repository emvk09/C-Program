// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n, i, f, stat= 0;
//     printf("\n Enter the size of array: ");
//     scanf("%d", & n);
//     int ary[n];
//     printf("Enter the array elements: \n");

//     // ENTER LOOP

//     for(i=0; i<n; i++)
//     {
//         scanf("%d",& ary[i]);
//     }
//     printf("Enter the element you need to find from the array: ");
//     scanf("%d", & f);

//     // RETURN LOOP

//     for(i= 0; i< n; i++)
//     {
//         if (f== ary[i])
//         {
//             stat= 1;
//             break;
//         }
//     }
//     if(stat== 1)
//         printf("Your element is found at index %d .", i);
//     else
//         printf("OPPS!, the element doesn't exist");
//     getch();
// }


// USING FUNCTIONS


#include<stdio.h>
#include<conio.h>

int lnfn(int [], int, int);   /*Function declaration*/

void main()
{
    int n, f, i, index;
    printf("\n Enter the size of array: ");
    scanf("%d", & n);
    int ary[n];
    printf("Enter the array elements: \n");

    for(i= 0; i< n; i++)
    {
        scanf("%d", & ary[i]);
    }

    printf("Enter the element you need to find from the array: ");
    scanf("%d", & f);

    index= lnfn(ary, n, f);    /*Function call*/

    if(index== -1)
        printf("OPPS!, the element doesn't exist.");
    else
        printf("Your element is found at index %d .", index);  
    getch ();
}

int lnfn(int a[], int b, int c)  /*Function definition*/
{
    int j; 
    for(j= 0; j< b; j++)
    {
        if(c== a[j])
        {
            return j;
        }
    }
    return -1;
}