#include<stdio.h>
#include<string.h>
union record{
    int i;
    float f;
    char str[20];
} record1;

int main()
{
record1.i=10;
printf("record.i:%d\n",record1.i);
record1.f=220.5;
printf("record.f:%f\n",record1.f);
strcpy(record1.str,"C Programming");
printf("record.str:%s\n",record1.str);
return 0;
}


