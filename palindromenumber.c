#include<stdio.h>
#include<conio.h>
void main()
{
    int num, cpy, rem= 0, rev;
    printf("\nEnter the number to be checked:\n");
    scanf("%d",& num);
    cpy= num;
    for( ; num!= 0; num= num/10)
    {
        rem= num % 10;
        rev= rev* 10 + rem;
    }
    printf("\nThe palindrome number is %d\n", rev);
    if (rev == cpy)
    {
        printf("The given number %d is a palindrome.", cpy);
    }
    else
    printf("The given number %d is not a palindrome.", cpy);
getch();
}
