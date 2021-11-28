#include<stdio.h>
int main()
{
    float a,r;
    printf("Enter the radius of the circle in metres:\n");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("The area of the circle is: %.2f metre square.",a);
    return 0;
}