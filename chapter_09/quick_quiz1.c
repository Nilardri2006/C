#include <stdio.h>
#include <string.h> // for strcpy function

// Quick Quiz: Write a program to store the details of 3 employees from user defined data.
// Use the structure declared above.
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the value of the code\n");
    scanf("%d", &e1.code);

    printf("Enter the salry \n");
    scanf("%f", &e1.salary);

    printf("Enter the name\n");
    scanf("%s", &e1.name);

    printf("%d,%f,%s\n", e1.code, e1.salary, e1.name);



    printf("Enter the value of the code\n");
    scanf("%d", &e2.code);

    printf("Enter the salry \n");
    scanf("%f", &e2.salary);

    printf("Enter the name\n");
    scanf("%s", &e2.name);

    printf("%d,%f,%s\n", e2.code, e2.salary, e2.name);



    printf("Enter the value of the code\n");
    scanf("%d", &e3.code);

    printf("Enter the salry \n");
    scanf("%f", &e3.salary);

    printf("Enter the name\n");
    scanf("%s", &e3.name);

    printf("%d,%f,%s\n", e3.code, e3.salary, e3.name);
    return 0;
}