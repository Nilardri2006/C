// 4. Write a program using recursion to calculate nth element of Fibonacci series. 
#include <stdio.h>
int fibonacci(int n)
{
    if(n<2)
    {
    return -1;
    }
    
    return fibonacci(n-1)+n;
}
int main(){
     int num;
     printf("Enter the number of terms: ");
     scanf("%d",&num);
    printf("the series is %d",fibonacci(num));
    return 0;
}