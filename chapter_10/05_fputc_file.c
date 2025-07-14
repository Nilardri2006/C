#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Roney1.txt", "w");//fputc is only openable when its in w mode
    fputc('c' , ptr);//it just wites 'c' in the file making all empty
    //using append it will put 'c' without removing all
    return 0;
}