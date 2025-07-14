#include <stdio.h>

int main()
{
    // int a=5;
    // int* ptr=&a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;//pointer adrres size is increased by 4 bytes bcoz int takes 4 byte
    // printf("The value of a is %u\n",ptr);

//charecter pointer
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // pointer adrres size is increased by 1 bytes bcoz char takes 1 byte
    printf("The value of a is %u\n", ptr);

    return 0;
}