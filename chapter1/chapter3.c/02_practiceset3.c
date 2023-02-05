#include<stdio.h>

int main(){
    float tax=0,income;
    printf("The income of a person is\n");
    scanf("%f",&income);
    
    if(income>250000 && income<=500000){
        tax=tax+0.05*(income-250000);
    }
    else if(income>500000 && income<=1000000){
        tax=tax+0.20*(income-500000);
    }
    else if(income>=100000){
        tax=tax+0.30*(income-1000000);
    }
   printf("your net income tax to be paid till 26 dec is %f",tax);
}