#include <stdio.h>
float celcius(float x);
int main(){
    float a;
    scanf("%f",&a);
    printf("temprtaure from celcius to fahrenheit is %.2f f\n",celcius(a));
    return 0;
}
float celcius(float x){
    float result;
    result=(float)(x * 9/5)+32;
    return result;
}