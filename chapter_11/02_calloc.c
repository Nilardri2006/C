#include <stdio.h>
#include<stdlib.h>
// Quick Quiz: Write a program to create an array of size n using calloc where n is an 
// integer entered by the user. 

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n , sizeof (int));
    // int arr[n];//this is not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d",ptr[0]);
    return 0;
}