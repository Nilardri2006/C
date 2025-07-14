// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.
// #include <stdio.h>

// int main(){
//     int arr[]={5,4,9,5,7,1,5,7,8,9};
//     int *ptr= arr;
//     printf("the (ptr+2) elemets is %d\n",*(ptr+2));
//     printf("the (ptr+2) elemets is %d\n",arr[2]);
//     printf("the first elemets is %d\n",arr[0]);
//     printf("the first elemets is %d\n",*ptr);
//     return 0;
// }

// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i)True. ans
// (ii)False.
// (iii)  Depends.

// 3. Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.

// #include <stdio.h>

// int main(){
//     int arr[100],i;
//     for(i=0;i<10;i++)
//     {
//         arr[i]=5*(i+1);
//     }
//     printf("The table is : \n ");
//     for(i=0;i<10;i++)
//     {
//         printf(" %d |",arr[i]);
//     }

//     return 0;
// }

// 4. Repeat problem 3 for a general input provided by the user using scanf.
// #include <stdio.h>

// int main()
// {
//     int arr[10], n, i, p;
//     printf("Enter the number to see the table: ");
//     scanf("%d", &n);

//     for (i = 0; i < 10; i++)
//     {
//         arr[i] = n * (i + 1);
//     }

//     printf("thee array is: \n");
//     for (i = 0; i < 10; i++)
//     {
//         printf(" %d |", arr[i]);
//     }

//     return 0;
// }

// 5. Write a program containing a function which reverses the array passed to it.
// #include <stdio.h>

// int main()
// {
//     int arr[100], i, temp;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf(" %d  ", arr[i]);
//     }

//     printf(" \n ");

//     for (i = 0; i < 5 / 2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[4 - i];
//         arr[4 - i] = temp;
//     }
//     printf(" \n ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
//     return 0;
// }

// 6. Write a program containing functions which counts the number of positive
// integers in an array.

// #include <stdio.h>

// int main()
// {
//     int arr[5], i, n, count = 0;
//     // input of array
//     printf("Enter the elements of the array: \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d \n", &arr[i]);
//     }
//     // preview of the array
//     printf("The given array: ");
//     for (i = 0; i < 5; i++)
//     {
//         printf(" %d |", arr[i]);
//     }
//     printf("\n");
//     // checking positive integers
//     for (i = 0; i < 5; i++)
//     {
//         if (arr[i] > 0)
//         {
//             count++;
//         }
//     }

//     printf("Number of positive integers are: %d", count);

//     return 0;
// }

// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.

// #include <stdio.h>

// int main()
// {
//     int arr[3][10], i, j;

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             if (i == 0)
//             {
//                 arr[i][j] = 2 * (j + 1);
//             }
//             else if (i == 1)
//             {
//                 arr[i][j] = 7 * (j + 1);
//             }
//             else
//             {
//                 arr[i][j] = 9 * (j + 1);
//             }
//         }
//     }
//     // printing the array

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             printf("  %d  |", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 8. Repeat problem 7 for a custom input given by the user.
// #include <stdio.h>

// int main()
// {

//     int arr[3][10], i, j, a, b, c;

//     printf("Enter the numbers one by one  to know table: \n");
//     scanf("%d\n%d\n%d\n",&a,&b,&c);

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             if (i == 0)
//             {
//                 arr[i][j] = a * (j + 1);
//             }
//             else if (i == 1)
//             {
//                 arr[i][j] = b * (j + 1);
//             }
//             else
//             {
//                 arr[i][j] = c * (j + 1);
//             }
//         }
//     }
//     // printing the array

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             printf("  %d  |", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9. Create a three–dimensional array and print the address of its elements in
// increasing order.
#include <stdio.h>

int main() {
    const int x = 2, y = 2, z = 2; // Dimensions of the 3D array
    int arr[x][y][z];

    printf("Addresses of elements in increasing order:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Address of arr[%d][%d][%d] = %u\n", i, j, k, (void*)&arr[i][j][k]);
            }
        }
    }
    return 0;
}
