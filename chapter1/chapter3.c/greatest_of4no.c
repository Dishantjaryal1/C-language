#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Enter num1\n");
    scanf("%d",&num1);

    printf("Enter num2\n");
    scanf("%d",&num1);

    printf("Enter num3\n");
    scanf("%d",&num1);

    printf("Enter num4\n");
    scanf("%d",&num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("the greatest number is %d\n",num1);
    }
    else if(num2>num3 && num2>num4){
        printf("the greatest number is %d\n",num2);
    }
    else if(num3>num4){
        printf("the greatest number is %d\n",num3);
    }
    else{
        printf("the greatest number is %d",num4);
    }
    return 0;

}
