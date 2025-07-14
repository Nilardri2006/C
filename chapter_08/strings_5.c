#include <stdio.h>
#include<string.h>
int main()
{
//**the "strcpy" function is used to copy the content 
//of second string into first string passed to it. 
    // char st[] = "Happyi hi";
    // printf("%d", strlen(st));
    char start[]="Happy";
    char end[56];
    strcpy(end,start);
    printf("\n%s",start);
    printf("\n%s",end);

//**the "strcat" is used to connect two strings together
//and if i print 1st one the second onw will be added
//or if i print the second one then 1st one will not be added.
    // char s1[56]="Harry";
    // char s2[56]="Bhai";
    // char target[30];
    // strcat(s1,s2);
    // printf("%s" ,s1);


//** if 2 srtrings are not same ...then it chwecks
//character by character....if 1st letter of 1st string
//comes in frist in ascii table than 1st letter of 2nd string
//thwn it returns (-) value and vice versa
   int a=strcmp("deep", "joke"); //dj is negative 
    printf("%d",a); 
    return 0;
}