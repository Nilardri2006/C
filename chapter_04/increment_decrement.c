#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value  of i  is :%d\n", i);

    i = i + 5;

    //++i incremenrs first then prints (pre increment operator)printf("The value of iis %d\n",++i);
    printf("The value of iis %d\n", ++i);
    printf("The value of iis %d\n", i);

    // i++ prints first and yhen increments later(post increment operator)

    printf("The value of iis %d\n", i++);
    printf("The value of iis %d\n", i);

    i+=2;
    printf("The value of iis %d\n", i);

    

    return 0;
}