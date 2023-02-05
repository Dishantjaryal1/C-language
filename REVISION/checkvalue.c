#include<stdio.h>
int main(){
    char character;
    scanf("%c",&character);
    
    if(character>='a' && character<='z' || character>='A' && character<='Z'){
        printf("its a alphabet");
        
    }
    else if(character>='0' && character<='9'){
        printf("its a digit");
        
    }
    else{
        printf("special character");
    }
    
    
    
}