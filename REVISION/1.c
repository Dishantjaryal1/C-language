#include<stdio.h>
int main(){
    int age;
    printf("The age of candidate is\n");
    scanf("%d",&age);
    
    if(age<18){
        printf("Sorry you are not eligible to vote.\n");
        printf("you will vote after %d year.",18-age);
    }
    else{
        printf("You can vote");
    }
}