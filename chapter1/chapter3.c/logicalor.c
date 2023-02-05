#include<stdio.h>

int main(){
    int age;
    int vippass;
    printf("The age of person is\n");
    scanf("%d",&age);

    printf("The vippass is\n");
    scanf("%d",&vippass);


    if(age<=70 && age>=18 || (vippass==1)){
        printf("the person is above 18,less than 70 and can drive\n");
    }

    else{
        printf("you can't drive\n");

    }
    return 0;

}