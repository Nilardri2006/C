#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Roney.txt", "r");//r for reading the file
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);
    
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    return 0;
}