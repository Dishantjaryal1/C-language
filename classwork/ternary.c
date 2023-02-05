#include<stdio.h>
int main()
{
    int num;
    printf("the value of num is\n");
    scanf("%d",&num);

    (num%2==0) ? printf("even"): printf("odd");
    return 0;
}