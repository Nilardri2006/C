#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Roney1.txt", "a");//a is for append mode what allows to seperately write changes in the file and the again writes
    int num = 435;//it is making a file named Roney1.txt which stores value 435
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}