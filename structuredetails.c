// 1st using Structures

#include<stdio.h>
#include<conio.h>

struct detail
{
    int roll;
    char name[100];
    int age;
    int mark;
}p1;

int main()
{
    printf("Enter the Roll no., name, age and mark respectively :\n");
    scanf("%d %s %d %d", & p1.roll, & p1.name, & p1.age, & p1.mark);  
    printf("\n Roll no:%d \nName:%s, \nAge:%d, \nMark:%d",p1.roll, p1.name, p1.age, p1.mark);
    return 0;
}



// // 2nd using Structure


// #include <stdio.h>
// struct student 
// {
//     int roll;
//     char name[50];
//     int age;
// } s[5];

// int main() 
// {
//     int i;
//     printf("Enter information of students:\n");

//     // Input loop

//     for (i = 1; i <= 5; i++) 
//     {
//         printf("\nSerial No: %d, \n", i);
//         printf("Enter roll number: ");
//         scanf("%d", &s[i].roll);
//         printf("Enter name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Age: ");
//         scanf("%d", &s[i].age);
//     }

//     // Output loop

//     for (i = 1; i <= 5; i++)
//     {
//         if (s[i].roll == 2)
//         {
//             printf("The details of student with roll no. 2 is,\n");
//             printf("Roll number: %d \n", s[i].roll);
//             printf("Name: %s \n", s[i].name);
//             printf("Age: %d \n", s[i].age);
//         }
//     }
//     return 0;
// }


// // 3rd using structure


// #include <stdio.h>
// struct student 
// {
//     int roll;
//     char name[50];
//     float marks;
//     int age;
//     char address[100];
// } s[15];

// int main() 
// {
//     int i;
//     printf("Enter information of students:\n");

//     // storing information
//     for (i = 1; i <= 15; i++) 
//     {
//         printf("\nSerial No: %d, \n", i);
//         printf("Enter roll number: ");
//         scanf("%d", &s[i].roll);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter marks: ");
//         scanf("%f", &s[i].marks);
//         printf("Enter Age: ");
//         scanf("%d", &s[i].age);
//         printf("Enter address: ");
//         scanf("%s", s[i].address);
//     }
//     printf("Displaying Information:\n\n");

//     // displaying information
//     for (i = 1; i <= 15; i++) 
//     {
//         printf("\nRoll number: %d\n", s[i].roll);
//         printf("Name: %s \n", s[i].name);
//         printf("Marks: %f \n", s[i].marks);
//         printf("Age: %d \n", s[i].age);
//         printf("Address: %s \n", s[i].address);
//     }
//     return 0;
// }




// // 1st using Union


// #include<stdio.h>
// #include<conio.h>

// union detail
// {
//     int roll;
//     char name[50];
//     int age;
//     int mark;
// }p1;

// int main()
// {
//     printf("\nEnter the Roll no.:\n");
//     scanf("%d", & p1.roll); 
//     printf("Roll no:%d", p1.roll); 
//     printf("\nEnter the Name:\n"); 
//     scanf("%s",& p1.name);
//     printf("Name:%s", p1.name); 
//     printf("\nEnter the age:\n");
//     scanf("%d", & p1.age);
//     printf("Age:%d", p1.age); 
//     printf("\nEnter the mark:\n"); 
//     scanf("%d", & p1.mark); 
//     printf("Mark:%d", p1.mark);  
//     return 0;
// }
