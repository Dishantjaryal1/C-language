#include<stdio.h>

int main(){
    int age;
    printf("The age of person is\n");
    scanf("%d",&age);

    if(age<=70 && age>=18){
        printf("the person is above 18,less than 70 and can drive\n");
    }

    else{
        printf("you can't drive\n");

    }
    return 0;

}