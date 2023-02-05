#include<stdio.h>
int main(){
    int i,factorial=1,n;
    printf("the value of n is\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        factorial*=i;

    }
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}