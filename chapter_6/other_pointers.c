// #include <stdio.h>

// int main(){
//     // char a='A';
//     // char*j=&a;
//     // float k = 5.203;
//     // float*p=&k;
//     // printf("\nstore: %u",&a);
//     // printf("\nstore: %u",j);

//     // printf("\nstore: %u",&k);
//     // printf("\nstore: %u",p);



//     // printf("\nThe value of address j is: %d",&j);
//     // //j stores a's value but j also have some addrest to be stored...that is printed here.
//     // return 0;
 
// }

#include <stdio.h> 
int main (){ 
int i = 8; 
int *j; 
j = &i; 
printf("add i= %u\n",&i); 
printf("add i= %u\n",j); 
printf("add j= %u\n",&j); 
printf("value i= %d\n",i);    
printf("value i= %d\n",*(&i)); 
printf("value i= %d\n",*j); 
return 0;          
} 