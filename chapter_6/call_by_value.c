#include <stdio.h>


    int sum(int a,int b);

    int sum(int a,int b){
        return a+b;
    }

    int main(){
        int x=5,y=8;
        printf("The sum of %d and %d is %d",x,y,sum(x,y));
    
    return 0;
}