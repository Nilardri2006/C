#include <stdio.h>


    // int sum(int* a,int* b);
//sum should change the value of x
    int sum(int* a,int* b){
        *a=6;
        return (*a+*b);
    }

    int main(){
        int x=5,y=8;
        printf("The sum of %d and %d is %d\n",x,y,sum(&x,&y));
        printf("The value of x is %d\n ",x);
    return 0;
}