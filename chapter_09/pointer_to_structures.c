#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    e1.code=56;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d", (*ptr).code);
    printf("%d", ptr->code);//same as (*ptr).code.Its name is arrow operator
    return 0;
}