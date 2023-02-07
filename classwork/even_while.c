#include <stdio.h>
int main(){
    int n=1;
    printf("the value of n is\n");
    scanf("%d",&n);

    while(n<=20){
        if (n%2==0){
            printf("%d\n",n);
        } 
        n++;
    }
    return 0;
}