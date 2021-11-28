#include<stdio.h>

// function declaration

void swap(int*, int*);  

//function definition

void swap(int*x, int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    int a, b;
    a= 10; b= 20;
    printf("a=%d,b=%d",a,b);

                                            // function call
    int*x= & a;  
    int*y= & b;
    swap(x,y);
    // swap( &a , &b );
    /*     Instead of 24 25 and 26 we can write : swap( &a , &b );        */
    printf("a=%d,b=%d",a,b);
    return 0;
}
