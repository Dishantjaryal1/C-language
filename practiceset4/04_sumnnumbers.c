#include<stdio.h>
int main(){
    int sum=0,i,n;
    printf("the value of n is\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of n natural number is %d\n",sum);
   
    return 0;
}
