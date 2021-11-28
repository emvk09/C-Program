#include<stdio.h>
int fact(int);                       /*Function declaration*/

int main()
{
int b, f;
printf("\n Enter the number:\t");
scanf("%d", & b);
f= fact(b);                           /*Function call*/
printf("Factorial= %d", f);
return 0;
}

int fact(int a)
{
    if (a> 1)
    {
        return(a* fact(a- 1));         /*Function definition*/
    }
    else
    {
        return 1;
    }
}

/*     Recursion Process


fact (3)
↓              ↺
return 3 * fact (2)  
           ↓              ↺
           return 2 * fact (1)   
                      ↓           ↺
                      return (1)        

*/                                                