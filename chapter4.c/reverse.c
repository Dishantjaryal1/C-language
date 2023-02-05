#include<stdio.h>

int main(){
    int i,a;
    printf("value of a is\n");
    scanf("%d",&a);

    for(i=a;i>=1;i--){
        printf("the value of i is %d\n",i);
    }
    return 0;
}