#include <stdio.h>

int main()
{   
    char ch;
    FILE *ptr;
    ptr = fopen("Roney1.txt", "r");//this reas all char in this file according to loop and prints here

    while (1){
        ch = fgetc(ptr); // when all the content of a file has been read break
        printf("%c",ch);
        if (ch == EOF)//EOF=end of file
        {
            break;
        }
        
    }
    fclose(ptr);
    return 0;
}