// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets() (ans)
// 2. puts()
// 3. printf()
// 4. scanf()

// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.
// #include <stdio.h>

// int main(){
//     char ch[5];
//     //%s
//     scanf("%s",ch);
//     for(int i=0;i<5;i++)
//     {
//         scanf("%c",&ch[i]);//%c
//     }

//     printf("%s\n",ch);

//     for(int i=0;i<5;i++)
//     {
//         printf("%c",ch[i]);
//     }

//     return 0;
// }

// 3. Write your own version of strlen function from <string.h>
// #include <stdio.h>
// #include <string.h>
// char strlenfunction(char *ch)
// {
//     printf("%d", strlen(ch));
// }

// int main()
// {
//     char ish[] = {'A', 'B', 'G', 'K', 'J', '6'};
//     strlenfunction(ish);
//     return 0;
// }

// 4. Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.
// #include <stdio.h>
// #include <string.h>
// void slice(char *str, int m, int n)
// {
//     if (m < 0)
//         m = 0;
//     if (n > strlen(str))
//         n = strlen(str);
//     if (m > n)
//     {
//         printf("aBe chutiye jo likh raha hai...padh bhi le kabhi");
//         return;
//     }
//     int i, j = 0;
//     for (i = m; i <= n; i++)
//     {
//         str[j++] = str[i];
//     }

//     str[j] = '\0';
// }
// int main()
// {
//     char c[100];
//     int m, n;
//     printf("Enter the String: ");
//     scanf("%s", c);

//     printf("\nEnter the 1st Slicing index: ");
//     scanf("%d", &m);
//     printf("\nEnter the 2nd Slicing index: ");
//     scanf("%d", &n);

//     slice(c, m, n);
//     printf("%s", c);

//     return 0;
// }

// 5. Write your own version of strcpy function from <string.h>
// #include <stdio.h>
// #include<string.h>

// void copy(char* target){
//     char already[]="My Name is Roney";
//     printf("%s",strcpy(target,already));
// }

// int main(){
//     char Roney[60];
//     copy(Roney);
//     return 0;
// }

// *6. Write a program to encrypt a string by adding 1 to the ascii value of its
// characters

// *7. Write a program to decrypt the string encrypted using encrypt function in
// problem 6.
// 8. Write a program to count the occurrence of a given character in a string.
// #include <stdio.h>
// #include <string.h>

// // Function to convert uppercase letters to lowercase
// void proccess(char *roney)
// {
//     int i = 0, j = 0;
//     while (roney[i] != '\0')
//     {
//         if (roney[i] != ' ')
//         {
//             if (roney[i] >= 'A' && roney[i] <= 'Z')
//             {
//                 roney[j] = roney[i] + ('a' - 'A');
//             } // Convert uppercase to lowercase
//             else
//             {
//                 roney[j] = roney[i];
//             }
//             j++;
//         }
//         i++;
//     }
//     roney[j] = '\0';
// }

// // Function to count occurrences of a character
// int occurance(char *roney, char n)
// {
//     int i, count = 0;
//     for (i = 0; i < strlen(roney); i++)
//     { // Fixed loop condition
//         if (roney[i] == n)
//         {
//             count++;
//         }
//     }
//     return count; // Return int instead of char
// }

// int main()
// {
//     char roney[100], n;

//     // Taking input
//     printf("Write anything without any space: ");
//     fgets(roney, sizeof(roney), stdin);//used to rmove spaces

//     printf("Choose the character to find its occurrence: ");
//     scanf(" %c", &n); // Space before %c to handle input buffer issue

//     // Convert the string to lowercase
//     proccess(roney);

//     // Convert searched character to lowercase
//     if (n >= 'A' && n <= 'Z')
//     {
//         n = n + ('a' - 'A');
//     }

//     // Print the count of occurrences
//     printf("The character '%c' appears %d times.\n", n, occurance(roney, n));

//     return 0;
// }

// 9. Write a program to check whether a given character is present in a string or not.
// #include <stdio.h>
// #include <string.h>

// // Function to convert uppercase letters to lowercase
// void proccess(char *roney)
// {
//     int i = 0, j = 0;
//     while (roney[i] != '\0')
//     {
//         if (roney[i] != ' ')
//         {
//             if (roney[i] >= 'A' && roney[i] <= 'Z')
//             {
//                 roney[j] = roney[i] + ('a' - 'A');
//             } // Convert uppercase to lowercase
//             else
//             {
//                 roney[j] = roney[i];
//             }
//             j++;
//         }
//         i++;
//     }
//     roney[j] = '\0';
// }

// // Function to count occurrences of a character
// char presence(char *roney, char n)
// {
//     int i;
//     for (i = 0; i < strlen(roney); i++)
//     { // Fixed loop condition
//         if (roney[i] == n)
//         {
//             printf("Present");
//             return 0;
//         }
//     }

//     printf("not Present");
// }

// int main()
// {
//     char roney[100], n;

//     // Taking input
//     printf("Write anything without any space: ");
//     fgets(roney, sizeof(roney), stdin); // used to rmove spaces

//     printf("\nwrite the letter to find its presence:  ");
//     scanf(" %c", &n); // Space before %c to handle input buffer issue

//     // Convert the string to lowercase
//     proccess(roney);

//     // Convert searched character to lowercase
//     if (n >= 'A' && n <= 'Z')
//     {
//         n = n + ('a' - 'A');
//     }

//     // Print the count of occurrences
//     presence(roney, n);

//     return 0;
// }