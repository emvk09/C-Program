#include<stdio.h>

// function declaration

int swap(int, int);  

int main()
{
    int a,b;
    a=10;b=20;
    printf("a=%d,b=%d\n",a,b);

// function call

    swap(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}

//function definition

int swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
