#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if(ch<=122 && ch>=97){
        printf("Its a lowercase character\n");
    }
    else{
        printf("Its a uppercase character\n");
    }
    return 0;

}