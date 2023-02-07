#include <stdio.h>
int main(){
    int n;
    printf("the value of n is\n");
    scanf("%d",&n); 

    for(1;n<=20;n++){
        if(n%2==0){
            printf("%d\n",n);
        }
    }
    return 0;
}