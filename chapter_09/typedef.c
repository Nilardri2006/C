#include <stdio.h>
#include<string.h>


typedef struct employee
{
    int code;
    float salary;
    char name[10];
}Emp;

int main()
{
//    typedef int harry;
//    harry a=55;
//    printf("Enter the value of a is %d \n",a);

//typedef struct employee Emp;
    Emp e1;
    Emp*ptr1= &e1;
    e1.code=45151;
    strcpy(e1.name,"Harry");
    e1.salary=54.34;
    printf("%d %f %s\n",e1.code,e1.salary,e1.name);
    printf("%d %f %s\n",ptr1->code, ptr1->salary,ptr1->name);


    return 0;
}