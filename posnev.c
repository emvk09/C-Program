#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a number to check its nature:\n");
    scanf("%f",&a);
    if (a==0)
    printf("%d is neither positive nor negative.",a);
    else
      if (a<0)
      printf("%.2f is a negative number.",a);
      else
      printf("%.2f is a positive number.",a);
    return 0;
}