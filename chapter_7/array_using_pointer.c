#include <stdio.h>

int main(){
    int marks[]={1, 5 , 8 , 7 , 5};
    // int*ptr=&marks[0];
    int*ptr=marks;
    printf("%d is %u\n",marks[2],&marks[2]);
    for(int i=0;i<6;i++)
    {
        printf("The emarks at index %d is%d\n",i,marks[i]);
        printf("The emarks at index %d is%d\n",i,*ptr);
        ptr++;
    }
    return 0;
}