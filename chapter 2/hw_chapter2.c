/* 1. What will be the output of this program 
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); 
*/

// I am 11.

/*
 2.Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float s1, s2;
    printf(" write the marks the user got on 1st subject out of 100: ");
    scanf("%f", &s1);

    printf(" write the marks the user got on 2nd subject out of 100: ");
    scanf("%f", &s2);
    float  total=(s1+s2)/2.0;
    if ((total>= 0.4) && ((s1 / 100) >=0.33) && ((s2 / 100) >= 0.33))
    {
        printf("pass");
    }

    else
    {
        printf("fail");
    }

    return 0;
}
*/

// 3.Calculate income tax paid by an employee to the government as per the slabs mentioned below: 
/*
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float amount,n;
    printf("enter the amount: ");
    scanf("%f",&amount);

    if(amount<250000 && amount>=0)
    printf("Tax free");

    else if(amount>=250000 && amount<=500000)
    printf("1 total: %f,tax: %f",amount+amount*0.05,amount*0.05);

    else if(amount>500000 && amount<=1000000)
    printf("2 total: %f,tax: %f",amount+amount*0.20,amount*0.20);

    else amount+
    printf(" 3 total: %f,tax: %f",amount+amount*0.30,amount*0.30);

    return 0;

}
*/

//4.Write a program to determine whether a character entered by the user is lowercase or not. 
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    char ch = 'a';
    printf("The character is %c\n",ch);
    printf("The value of the character is %d\n",ch);

    if(ch>=97 && ch<=122){
        printf("The character is  lowercase\n");
    
    }
    else{
        printf("This  character is not a lowercase\n");
    }

    return 0;
}
*/


//6. Write a program to find greatest of four numbers entered by the user. 
/*
#include <stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    printf("Enter the 4 numbers repectively: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>=b && a>=c && a>=d)
    printf("1st one is greatest: %d ",a);

    else if(b>=c && b>=d && b>=a)
    printf("2nd one is greatest : %d",b);

    else if(c>=d && c>=a && c>=b)
    printf("3rd one is greatest: %d ",c);

    else
    printf("last one is greatest :%d",d);

    return 0;

}
    */

// 7.marks 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int m,k;
    printf("enter the marks u got out of 100:\n");
    scanf("%d",&m);

    if(m>100 ||m<0)
    {
        printf("Wrong input!!...write again");
        scanf("%d",&m);
    }
    else
    {

    k=m/10;

    switch(k){

        case 10:
        case 9:
        printf("your got O");
        break;

        case 8:
        printf("your got E");
        break;

        case 7:
        printf("your got A");
        break;

        case 6:
        printf("your got B");
        break;

        case 5:
        printf("your got C");
        break;

        case 4:
        printf("your got D");
        break;

     default:
        printf("Fail\n");
 }
}

 return 0;

}