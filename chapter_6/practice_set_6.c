// 1. Write a program to print the address of a variable. Use this address to get the 
// value of the variable. 
// #include <stdio.h>

// int main(){
//     int a=5;
//     int* p=&a;
//     printf("The integral address of a is: %u and the address is: %p \n",&a,&a);
//     printf("The value of the variable is : %d \n",*p);
//     return 0;
// }



// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to  a function and print its address. Are these addresses same? Why?
// #include <stdio.h>
// int function();
// int function(int* k){
//     printf("The value of i is: %d",*k);
//     return 1;
// }
// int main(){
//     int i=6;
//     int*k=&i;
//     //printing address
//     printf("The address of i is: %u",&i);
//     function(&k);


//     return 0;
// }




// 3. Write a program to change the value of a variable to ten times of its current 
// value. 
// #include <stdio.h>
// int function();
// int function(int* k){
//     *k=*k*10;;
//     return 1;
// }
// int main(){
//     int i=6;
//     int*k=&i;
//     //printing address
//     printf("The address of i is: %u",&i);
//     function(k);

//     printf("The address of i is: %d",*k);
//     return 0;
// }



//4. Write a function and pass the value by reference. 
// 5. Write a program using a function which calculates the sum and average of two 
// #include <stdio.h>
// int* sum(int a ,int b){
//     int s=a+b;
//     int* ptr =&s;
//     printf("The sum is %d\n",s);
//     return ptr;
// }

// float* avg(float a, float b){
//     float average=(a+b)/2.0;
//     float* ptr=&average;
//     printf("The average is: %f",&average);
//     return ptr;
// }

// int main(){
//     int x=5;
//     int y=6;
//     int* ptr1;
//     int* ptr2;

//     ptr1=sum(x,y);
//     ptr2=avg(x,y);

    

//     return 0;
// }



// 6. Write a program to print the value of a variable i by using “pointer to pointer” type 
// of variable. 

#include <stdio.h>

int main(){
    int i=2;
    int* ptr1=&i;
    int **ptr2=&ptr1;
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",*ptr1);
    printf("the address of i is %u\n",**ptr2);
    return 0;
}
// 7. Try problefunction(k)m 3 using call by value and verify that it does not change the value of 
// the said variable. 