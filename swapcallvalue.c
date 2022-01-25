#include<stdio.h>

// function declaration
int swap(int, int);  

int main()
{
    int a, b;
    a= 10;
    b= 20;
    printf("Before in main: a= %d, b= %d\n", a, b);

// function call
    swap(a, b);

    printf("After in main: a= %d, b= %d", a, b);
    return 0;
}

//function definition
int swap(int x, int y)
{
    int t;
    t= x;
    x= y;
    y= t;
    printf("In Function: x= %d, y= %d\n", x, y);
}
