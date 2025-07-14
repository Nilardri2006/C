#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Roney1.txt", "w");//w for writing the file
    int num = 435;//it is making a file named Roney1.txt which stores value 435
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}