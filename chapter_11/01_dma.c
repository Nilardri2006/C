#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof (int));//will give a apointer for n integer.will give n* 8 amount of memory in ptr to store 
    // int arr[n];//this is not allowed in c
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d",ptr[0]);
    return 0;
}