// Quick Quiz: Modify the program above to check whether the file exists or not before 
// opening the file. 

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Ronejy.txt", "r");//if the file does not exist so it will retun 0
    if(ptr == NULL){
        printf("The file does not exist\n");
    }
    else{
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
    }
    return 0;
}