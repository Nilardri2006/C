#include <stdio.h>

int main(){
    int arr[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("ENter the values of arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("the values of arr[%d][%d] is : %d    ",i,j,arr[i][j]);
           
        }
        printf("\n");
    }
;
    return 0;
}