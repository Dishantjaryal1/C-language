#include<stdio.h>

int main(){
    float principle,time,rate;
    printf("The principle is\n");
    scanf("%f",&principle);

    printf("The time is\n");
    scanf("%f",&time);

    printf("The rate is\n");
    scanf("%f",&rate);

    printf("the simple interest is %f",principle*time*rate/100);
    return 0;

}