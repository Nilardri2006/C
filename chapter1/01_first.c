#include <stdio.h>

int main(){
    float p,t,r,i;
    printf("Enter principle,time in month ,rate of intrest respectively: ");
    scanf("%f%f%f",&p,&t,&r);


    printf("simple interest: %f",i=(p*t*r)/100);
    printf("press enter ti see more...\n");
    scanf(" ");
    printf("So u have to return: %f +%f = %f",p,i,p+i);



    return 0;
}