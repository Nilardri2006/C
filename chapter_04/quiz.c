// Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     while (i <= 20)
//     {
//         if (i >= 10)
//         {
//             printf("%d\n", i);
//         }

//         i++;
//     }
//     return 0;
// }

//Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.

// #include <stdio.h>

// int main(){
//     int i=0,n;
//     printf("enter the n: ");
//     scanf("%d",&n);

//     do
//     {
//         printf("%d \n",i);
//         i++;
//     }while(i<=n);
    
    
//     return 0;
// }

//Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
#include <stdio.h>

 int main(){
     int n;
     printf("enter the n: ");
     scanf("%d",&n);

     for(int i=n;i>=0;i--){
        printf("%d",i);

     }
     return 0;
    }