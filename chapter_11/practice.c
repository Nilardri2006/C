// CHAPTER 11 – PRACTICE SET
// -----------------------------------------------------------------------------------------------
// 1. Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int i;
//     int *ptr;
//     ptr = (int*) malloc (6 * sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;
//     ptr[5] = 6;
//     for(i = 0; i<6;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }
// -----------------------------------------------------------------------------------------------
// 2. Use the array in problem 1 to store 6 integers entered by the user.

// #include <stdio.h>
// #include<stdlib.h>

// int main(){
//     int i;
//     int *ptr;
//     ptr = (int*) calloc (6 , sizeof(int));
//     for(i=0; i<6 ; i++){
//         scanf("%d/n",&ptr[i]);
//     }

//     for(i = 0; i<6;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------
// 3. Solve problem 1 using calloc().
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i;
//     int *ptr;
//     ptr = (int *)calloc(6, sizeof(int));
//     for (i = 0; i < 6; i++)
//     {
//         scanf("\n%d", &ptr[i]);
//     }
    
//     printf("  %d",ptr[4]);

//     return 0;
// }


// -----------------------------------------------------------------------------------------------
// 4. Create an array dynamically capable of storing 5 integers. Now use realloc so
// that it can now store 10 integers.
// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int i;
//     int *ptr;
//     ptr = (int*) malloc (6 * sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;
//     ptr[5] = 6;
//     for(i = 0; i<6;i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr=(int*) realloc(ptr, 12* sizeof(int));
//     printf("%d\n",ptr[5]);
//     printf("%d\n",ptr[9]);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------
// 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
// make it store 15 number (from 7 x 1 to 7 x 15).
// #include <stdio.h>
// #include<stdlib.h>

// int main(){
//     int i,n=10;
//     int *ptr;
//     ptr = (int*) malloc (10 * sizeof(int));
//     for(i=1 ; i<=n ; i++){
//        ptr[i] = 7 * i;
//     }
//     n =15;
//     ptr = (int*) realloc (ptr , 10 * sizeof(int));
//     for(i=1 ; i<=n ; i++){
//         ptr[i] = 7 * i;
//     }
//     for(i=1 ; i<=n ; i++){
//         printf("\n%d",ptr[i]) ;
//     }
    
//     return 0;
// }

// -----------------------------------------------------------------------------------------------
// 6. Attempt problem 4 using calloc().
// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int i;
//     int *ptr;
//     ptr = (int*) calloc (6 , sizeof(int));
//     for( i = 0;i<6;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(i = 0; i<6;i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr=(int*) realloc(ptr, 12* sizeof(int));
//     printf("%d\n",ptr[5]);
//     printf("%d\n",ptr[9]);
//     return 0;
// }
// -----------------------------------------------------------------------------------------------
