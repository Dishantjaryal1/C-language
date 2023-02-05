#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    float c=sqrt(num);

    printf("square root of given number is %.1f",c);
    return 0;

}