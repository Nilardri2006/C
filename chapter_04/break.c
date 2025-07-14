#include <stdio.h>

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n",i);
        if (i == 5)
        {
            break;  //completelty takes control out from the loop
            //continue;  //selectively takes the control out from the loop for some special cases only
        }
        printf("hello guys \n");
        
    }
    return 0;
}