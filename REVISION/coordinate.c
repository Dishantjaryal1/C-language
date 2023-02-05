#include<stdio.h>
int main(){
    int co1,co2;
    printf("the coordinates are\n");
    scanf("%d %d",&co1,&co2);
    
    if(co1>0 && co2>0){
        printf("first quadrant");
    }
    else if(co1<0 && co2>0){
        printf("second quadrant");
        
    }
    else if(co1<0 && co2<0){
        printf("third quadrant");
    }
    else{
        printf("four quadrant");
    }
}
    