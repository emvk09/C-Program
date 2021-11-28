#include <stdio.h>
int main()
{
  int n, i, j, temp, search, first, last, middle;

  printf("\nEnter size of array: \n");
  
  scanf("%d", & n);
  int  arr[n];
  printf("Enter the integers \n");

  for (i= 0; i< n; i++)
    scanf("%d", & arr[i]);

// Bubble sort

  for(i= 0; i< n; i++)
  {
      for (j= i; j< n; j++)
      {
        if(arr[i] >= arr[j])
        {
          temp= arr[i];
          arr[i]= arr[j];
          arr[j]= temp;
        }
      }
  }

  printf("\nThe ordered array is now arranged with new index positions.");
  printf("\nEnter value to find from the array: ");
  scanf("%d", & search);
  first= 0;
  last= n- 1;
  middle= (first+last)/2;

  for ( ; first <= last; middle = (first + last)/2) 
  {
    if (arr[middle] == search) 
    {
      printf("%d found at index %d.\n", search, middle);
      break;
    }

    else if (arr[middle] < search)
      first = middle + 1;

    else if (arr[middle] > search)
      last = middle - 1;
  }

  if (first> last)
    {
      printf("OOPS! Nunber not found. \n%d isn't present in the list.\n", search);
    }
  return 0;
}


// // USING FUNCTIONS


// #include <stdio.h>

// // function definition

// int bin(int n, int [], int);



// int main()
// {
//   int i, first, last, n, search, res;

//   printf("Enter number of elements\n");
//   scanf("%d", &n);
//   int  array[n];

//   printf("Enter %d integers\n", n);

//   for (i = 0; i < n; i++)
//     scanf("%d", &array[i]);

//   printf("Enter value to find\n");
//   scanf("%d", &search);

//   res = bin( n, array, search );
//   if (res==1)
//     printf ("Number not found");
//   else 
//     printf("%d found at index %d.\n", search, res);
//   return 0;
// }

// // function declaration

// int bin(int n, int array[], int search)
// {
//   int i, first, last, middle;
//   first= 0;
//   last= n-1;
//   middle=(first+ last)/2;

//   for ( ; first <= last; middle=(first+ last)/2 )
//   {
//     if (array[middle] < search)
//       first= middle + 1;
//     else if (array[middle] > search)
//       last= middle - 1;
//     else if (array[middle] == search)
//       return middle;
//   }
//   if (first > last)
//     return 1;
// }