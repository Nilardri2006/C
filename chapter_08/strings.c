#include <stdio.h>

int main()
{
    char st[] = "abc";
    // is same as....
    // char st[]={'a','b','c','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("Character is %c\n", st[i]);
    }
    
    return 0;
}