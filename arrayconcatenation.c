#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],str2[100];
  int len,i;
  printf("Enter the string1: ");
  gets(str1);
  printf("Enter the string2: ");
  gets(str2);
 
  // TO FIND LENGTH OF STRING 1 WITHOUT LIBRARY FUNCTIONS

  for (len=0; str1[len]!='\0'; len++);
 
  // CONATENATION USING STRING 

  for (i=0; str2[i]!='\0'; i++, len++)
    str1[len]= str2[i];
    
  str1[len]='\0';
  printf("The concatenated string is: %s",str1);
  return 0; 
}

