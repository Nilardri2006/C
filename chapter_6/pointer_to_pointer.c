#include <stdio.h>

int main(){
    int i=9;
    int *j=&i;
    int **k=&j;

    printf("yhe value of i is %d\n",i);
    printf("yhe value of i is %d\n",*j);
    printf("yhe value of i is %d\n",*&i);
    printf("yhe value of i is %d\n",**&j);
    return 0; 
}