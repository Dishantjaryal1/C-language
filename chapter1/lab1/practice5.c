#include<stdio.h>

int main(){
    float celcius;
    printf("The temperature in celcius is\n");
    scanf("%f",&celcius);

    printf("temperature from celcius to fahrenheit is %f",celcius*9/5+32);
    return 0;


}