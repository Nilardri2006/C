#include <stdio.h>

int main()
{
    char st[30];
    gets(st);//is used to read an entire line of input, including spaces, until a newline (\n) is encountered.
    // printf("%s",st);
    puts(st); // its used to print the string and bring the cursor to the new next line so tha t next printf value could be printed easily
    printf("hey");
    return 0;
}