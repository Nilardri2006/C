#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Roney1.txt", "r");//fgetc is only openable when its in r mode
    char c = fgetc(ptr);//fgetc reads the first character of the written in file
    printf("%c" , c);    
    
    return 0;
}