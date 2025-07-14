// CHAPTER 9 – PRACTICE SET
//-----------------------------------------------------------------------------------
// 1. Create a two-dimensional vector using structures in C.

// #include<stdio.h>
// struct vector{
//     int i;
//     int j;
// };

// int main(){
//     struct vector v ={5 , 6};
//     printf("The vector is %di +%dj", v.i , v.j);
//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional.

// # include<stdio.h>
// struct vector{
//    int i;
//    int j;
// };

// struct vector sumvector(struct vector v1 , struct vector v2){
//    struct vector v3 = {v1.i + v2.i , v1.j + v2.j};
//    return v3;
// }

// int main(){
//    struct vector v1 = { 1 , 6 };
//    struct vector v2 = { 5 , 8 };
//    struct vector v3 = sumvector(v1,v2);
//    printf("the sum of 2 vector is: %di + %dj",v3.i,v3.j);
//    return 0;
// }
// ----------------------------------------------------------------------------------

// 3. Twenty integers are to be stored in memory. What will you prefer- Array or
// structure?
// obv array
// --------------------------------------------------------------------------------------
// 4. Write a program to illustrate the use of arrow operator → in C.
// #include<stdio.h>
// typedef struct arrow{
//    int value;
// }T;

// int main(){
//    T b;
//    b.value = 5;
//    T *ptr;
//    ptr = &b;
//    printf("the value of b is %d",ptr->value);
// }
// -----------------------------------------------------------------------------------------

// 5. Write a program with a structure representing a complex number.

// #include<stdio.h>
// struct complex{
//     int a;
//     int b;
// };

// int main(){
//     struct complex number = { 3 , 4 };
//     printf("the vector is %d + %di", number.a,number.b);
//     return 0;

// }
// --------------------------------------------------------------------------------------------------------

// 6. Create an array of 5 complex numbers created in Problem 5 and display them
// with the help of a display function. The values must be taken as an input from
// the user.

// #include<stdio.h>
// typedef struct complex {
//     int real;
//     int img;
// }complex;

// void display (complex c){
//     printf("The complex number is : %d + %di\n",c.real,c.img);
// }

// int main(){
//  complex carr[5];
//     for(int i=0; i<5 ; i++)
//     {
//         printf("Enter the real value: ");
//         scanf("%d",&carr[i].real);
//         printf("Enter the imaginary value: ");
//         scanf("%d",&carr[i].img);
//         display(carr[i]);
//     }

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------

// 7. Write problem 5’s structure using ‘typedef’ keywords.

// #include<stdio.h>
// typedef struct complex{
//     int a;
//     int b;
// }Z;

// int main(){
//     Z number = { 3 , 4 };
//     printf("the vector is %d + %di", number.a,number.b);
//     return 0;

// }

// -------------------------------------------------------------------------------------------------------

// 8. Create a structure representing a bank account of a customer. What fields did
// you use and why?
// #include <stdio.h>
// #include<string.h>
// typedef struct employee
// {
//     char Name[10];
//     int account_no;
//     int phone_no;
//     float amount;

// }bank;

// int main()
// {
//     bank A;
//     strcpy(A.Name,"Nilardri");
//     A.account_no = 74491;
//     A.phone_no = 74443;
//     A.amount = 788.88;
//     printf("the customer bank info \n%s\n%d\n%d\n%f", A.Name, A.account_no, A.phone_no, A.amount);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------




// 9. Write a structure capable of storing date. Write a function to compare those
// dates.
// #include<stdio.h>
// struct date{
//     int mm;
//     int dd;
//     int yyyy;
// };

// int compare(struct date d1,struct date d2){
//     if(d1.yyyy==d2.yyyy && d1.mm==d2.mm && d1.dd==d2.dd)
//     {
//         return 0;
//     }
//     else if(d1.yyyy > d2.yyyy)
//     {
//         return 1;
//     }
//     else if(d1.mm > d2.mm)
//     {
//         return 1;
//     }
//     else if(d1.dd > d2.dd)
//     {
//         return 1;
//     }
//     else
//     return -1;
// }

// int main(){
//     struct date d1 = { d1.mm , d1.dd , d1.yyyy };
    
//     printf("Enter the month mm: ");
//     scanf("%d",&d1.mm);
//     printf("Enter the date dd: ");
//     scanf("%d",&d1.dd);
//     printf("Enter the year yyyy: ");
//     scanf("%d",&d1.yyyy);
    
//     struct date d2 = { d2.mm , d2.dd , d2.yyyy };

//     printf("Enter the month mm: ");
//     scanf("%d",&d2.mm);
//     printf("Enter the date dd: ");
//     scanf("%d",&d2.dd);
//     printf("Enter the year yyyy: ");
//     scanf("%d",&d2.yyyy);

    
//     printf("the comparison: %d",compare(d1,d2));
//     return 0;
// }
// ---------------------------------------------------------------------------------------




// // 10. Solve problem 9 for time using ‘typedef’ keyword.
// #include<stdio.h>
// typedef struct date{
//     int mm;
//     int dd;
//     int yyyy;
// }W;

// int compare(W d1,W d2){
//     if(d1.yyyy==d2.yyyy && d1.mm==d2.mm && d1.dd==d2.dd)
//     {
//         return 0;
//     }
//     else if(d1.yyyy > d2.yyyy)
//     {
//         return 1;
//     }
//     else if(d1.mm > d2.mm)
//     {
//         return 1;
//     }
//     else if(d1.dd > d2.dd)
//     {
//         return 1;
//     }
//     else
//     return -1;
// }

// int main(){
//     W d1 = { d1.mm , d1.dd , d1.yyyy };
    
//     printf("Enter the month mm: ");
//     scanf("%d",&d1.mm);
//     printf("Enter the date dd: ");
//     scanf("%d",&d1.dd);
//     printf("Enter the year yyyy: ");
//     scanf("%d",&d1.yyyy);
    
//     W d2 = { d2.mm , d2.dd , d2.yyyy };

//     printf("Enter the month mm: ");
//     scanf("%d",&d2.mm);
//     printf("Enter the date dd: ");
//     scanf("%d",&d2.dd);
//     printf("Enter the year yyyy: ");
//     scanf("%d",&d2.yyyy);

    
//     printf("the comparison: %d",compare(d1,d2));
//     return 0;
// }
// --------------------------------------------------------------------------------------------------