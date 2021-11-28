#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], rstr[100];
  int i, j, len;
  printf("\n Enter the word: ");
  scanf("%s", & str);

// TO FIND LENGTH OF STRING 1 WITHOUT LIBRARY FUNCTIONS

  for (len= 0; str[len] != '\0'; len++);

  for(j= 0, i= len- 1; i>= 0; i--, j++)
  {
    rstr[j] = str[i];
  }
  printf("\nThe reverse string is: %s \n",rstr);

// TO CHECK WHETHER THE STRING IS PALINDROME OR NOT

  if(strcmp (rstr, str) == 0)
    printf("String is Palindrome\n");
  else
    printf("String Not Palindrome\n");
  return 0;
}




// // ONLY USING STRING FUNCTIONS


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], cpy_str[100];
//     printf("Enter the word: ");
//     scanf("%s",&str);
//     strcpy(cpy_str, str);
//     strrev(str);
//     printf("The reverse string is: %s\n",str);
//     if(strcmp(cpy_str,str)==0)
//       printf("String is Palindrome\n");
//     else
//       printf("String Not Palindrome\n");
//     return 0;
//  }