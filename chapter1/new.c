#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("Enter the value of celcius sacale: ");
    scanf("%f",&celcius);

    
    fahrenheit=(celcius*(9/5))+32;
    printf("temperature in fahrenhiet scale %f",fahrenheit);
    return 0;
}
