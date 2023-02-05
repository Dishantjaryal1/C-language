#include<stdio.h>

int main(){
    int physics,chemistry,maths;
    float total;
    printf("the marks in physics is\n");
    scanf("%d",&physics);

    printf("the marks in chemistry is\n");
    scanf("%d",&chemistry);

    printf("the marks in maths is\n");
    scanf("%d",&maths);
    
    total=(physics+chemistry+maths)/3;

    if(total<40 || physics<33 || chemistry<33 || maths<33 ){
        printf("your percentage is %f and you are fail",total);   
    }
    else{
        printf("your percentage is %f and you are pass",total);
    }
    return 0;
}