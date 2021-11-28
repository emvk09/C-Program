// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter the number A: ");
//     scanf("%d",&a);
//     printf("\nEnter the number B: ");
//     scanf("%d",&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("\nThe number A is: %d",a);
//     printf("\nThe number B is: %d",b);
//     return 0;
// }




// swap without temp

#include<stdio.h>  
int main()    
{    
int a, b;      
printf("Enter A: ");
scanf("%d",&a);
printf("Enter B: ");  
scanf("%d",&b);          
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap A=%d B=%d",a,b);    
return 0;  
}   


