// CHAPTER 10 – PRACTICE SET
// ----------------------------------------------------------------------------------------------------
// 1. Write a program to read three integers from a file.
// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("Roney.txt", "r");
//     int num;
//     fscanf(ptr, "%d" ,&num);
//     printf("the value of num is : %d \n",num);

//     fscanf(ptr, "%d" ,&num);
//     printf("the value of num is : %d \n",num);

//     fscanf(ptr, "%d" ,&num);
//     printf("the value of num is : %d \n",num);

//     fclose(ptr);
//     return 0;
// }
// -------------------------------------------------------------------------

// 2. Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.
// #include<stdio.h>
// int main(){
//     int b;
//     FILE *fptr;
//     fptr = fopen("Roney.txt", "w");
//     printf("please input the the number  'Roney.txt' file: \n");
//     scanf("%d",&b);

//     int num = b;
//     fprintf(fptr, "%d", num);
//     fclose(fptr);

//     FILE *ptr;
//     ptr = fopen("Roney.txt" , "r");
//     int a;
//     fscanf(ptr , "%d" ,&a);
//     printf("The value of the ineger is: %d\n",a);

//     //multiplication table
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d * %d = %d\n",a,i,a*i);
//         i++;
//     }
//     fclose(ptr);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------
// 3. Write a program to read a text file character by character and write its content
// twice in separate file.
// #include<stdio.h>

// int main(){
//     char ch;
//     FILE *ptr;
//     FILE *ptr2;
//     ptr = fopen("Roney1.txt","r");
//     ptr2 = fopen("Roney2.txt","a");

//     while(1){
//         if(ch == EOF)
//         {
//             break;
//         }
//         else
//         {
//             ch = fgetc(ptr);
//             fprintf(ptr2 , "%c" , ch);
//             fprintf(ptr2 , "%c" , ch);
//             printf("%c" , ch);

//         }
//     }

//     }
// --------------------------------------------------------------------------------------------------------

// 4. Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     char name1[50] ,name2[50];
//     int salary1 ,salary2;
//     ptr = fopen("salary.txt", "w");

//     printf("Enter the name of the employee1:  ");
//     scanf("%s" , name1);

//     printf("Enter the salary of the employee1:  ");
//     scanf("%d" , &salary1);

//     printf("Enter the name of the employee2:  ");
//     scanf("%s" , name2);

//     printf("Enter the salary of the employee2:  ");
//     scanf("%d" , &salary2);

//     fprintf(ptr , "%s" , name1);
//     fprintf(ptr , "%s" , ", ");
//     fprintf(ptr , "%d" , salary1);
//     fprintf(ptr , "%c" , '\n');

//     fprintf(ptr , "%s" , name2);
//     fprintf(ptr , "%s" , ", ");
//     fprintf(ptr , "%d" , salary2);
//     fprintf(ptr , "%c" , '\n');

//     return 0;
// }
// -------------------------------------------------------------------------------------------------------

// 5. Write a program to modify a file containing an integer to double its value.
#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");
    fscanf(ptr , "%d" , &num);
    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr , "%d" , 2*num);
    fclose(ptr);
    return 0;
}