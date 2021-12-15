#include<stdio.h>    
int main(){  
int a[10][10],b[10][10],mul[10][10],x,y,i,j,k;    
printf("enter the number of row:");    
scanf("%d",&x);    
printf("enter the number of column:");    
scanf("%d",&y);    
printf("enter the first matrix element:\n");    
for(i=0;i<x;i++)    
{    
for(j=0;j<y;j++)    
{    
scanf("%d",&a[i][j]);    
  }    
}    
printf("enter the second matrix element:\n");    
for(i=0;i<x;i++)    
{    
for(j=0;j<y;j++)    
{    
scanf("%d",&b[i][j]);    
  }    
}    
    
printf("multiply of the matrix:\n");    
for(i=0;i<x;i++)    
{    
 for(j=0;j<y;j++)    
{    
mul[i][j]=0;     <<<<<<<<<<<<<<<<<
for(k=0;k<x;k++)      <<<<<<<<<<<<<<<<<<<<<<<<
{    
mul[i][j]+=a[i][k]*b[k][j];    <<<<<<<<<<<<<<<<<<<<<<<<<<<<
    }    
  }    
}    
//for printing result    
for(i=0;i<x;i++)    
{    
 for(j=0;j<y;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return (0);  
}  
