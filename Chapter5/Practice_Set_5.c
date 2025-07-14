// 1. Write a program using function to find average of three numbers. 
// #include <stdio.h>
// float average(float a,float b,float c){
    
  
//     return (a+b+c)/3.0;
// }
// int main(){
//     float p,q,r;
//     printf("Enter the 3 numbers to calculate average: ");
//     scanf("%f %f %f",&p,&q,&r);
//     printf("The Average is: %f",average(p,q,r));
//     return 0;
// }



// 2. Write a function to convert Celsius temperature into Fahrenheit. 
// #include <stdio.h>
// float converter(float cel)
// {
//     float fah=(32+((9/5.0)*cel));
//     return fah;
// }
// int main(){
//     float fahrenheit,celsius;
//     printf("Enter the Celcius temperature: ");
//     scanf("%f",&celsius);

//     printf("the fahrenheit value is: %f",converter(celsius));
//     return 0;
// }


// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2. 
// #include <stdio.h>
//  float force(float mass)
//  {
//      float f=9.8*mass;
//      return f;
//  }
//  int main(){
//      float mass;
//      printf("Enter the mass of the body: ");
//      scanf("%f",&mass);

//      printf("the fahrenheit value is: %f",force(mass));
//      return 0;
//  }


// 4. Write a program using recursion to calculate nth element of Fibonacci series. 
// #include <stdio.h>
// int fibonacci(int n)
// {
//     if (n==0)
//     return 0;
//     if (n==1)
//     return 1;
    
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//      int num;
//      printf("Enter the number of terms: ");
//      scanf("%d",&num);
//     printf("the series is %d",fibonacci(num));
//     return 0;
// }


// 5. What will the following line produce in a C program: 
//  int a = 4; 
//  printf("%d %d %d \n", a, ++a, a++); 
// #include <stdio.h>

// int main(){
//     int a = 4; 
//      printf("%d %d %d \n", a, ++a, a++); //Function argument evaluation order is unspecified in C, so different compilers may produce different results.
//     return 0;
// }


// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
// #include<stdio.h> 
// int fibonacci(int n)
//  {
//      if (n<1)
//      return 0;
     
    
//      return fibonacci(n-1)+n;
//  }
//  int main(){
//       int num;
//       printf("Enter the number of terms: ");
//       scanf("%d",&num);
//      printf("the series is %d",fibonacci(num));
//      return 0;
//  }


// 7. Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * * 
// #include <stdio.h>
// void star(int row)
// {
//     int i,j;
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=(2*i-1);j++)
//         {
//         printf("*");
//         }
//         printf("\n");
//     }

// }
// int main(){
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     star(rows);
//     return 0;
// }