// Quick Quiz: Write a program to demonstrate the usage of free() with malloc(). 
// #include <stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     int *ptr;
//     scanf("%d", &n);
//     ptr = (int*) calloc(n , sizeof (int));
//     // int arr[n];//this is not allowed in c
//     ptr[0] = 3;
//     ptr[1] = 6;
//     printf("%d",ptr[0]);
//     free(ptr);//its freeing the memory after work can be seen while working on very little memory
//     return 0;
// }
    // Quick Quiz: Write a program to create an array of size n using calloc where n is an 
    // integer entered by the user. 

    #include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n , sizeof (int));
    // int arr[n];//this is not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    free(ptr);
    printf("%d",ptr[1]);//will show garbage value because thee predeclared free(ptr) emptyfied the memory
    return 0;
}