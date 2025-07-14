#include <stdio.h>
#include<stdlib.h>

int main(){
    float n =5;
    float *ptr;

    ptr = (float*) malloc(n * sizeof (float));//will give a apointer for n integer.will give n* 8 amount of memory in ptr to store 
    // int arr[n];//this is not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 6;
    ptr[3] = 6;
    ptr[4] = 6;
    printf("%f",ptr[0]);
    printf("%f",ptr[1]);
    printf("%f",ptr[2]);
    printf("%f",ptr[3]);
    printf("%f",ptr[4]);
    return 0;
}