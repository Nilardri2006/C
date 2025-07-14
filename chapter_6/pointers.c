#include <stdio.h>

int main(){
    int a=71;
    int*j=&a;
    int k=55;
    printf("store: %u",&a);
    printf("\nstore: %u",j);
    printf("\nstore: %u",&k);

    printf("\nThe value of address j is: %d",&j);
    //j stores a's value but j also have some addrest to be stored...that is printed here.
    return 0;
}