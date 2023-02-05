#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(){
    int guess,nguesses,number;
    srand(time(0));
    number=rand()%100+1;

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess<number){
            printf("Higher number please!\n");
        }
        else if(guess>number){
            printf("Lower number please!\n");
        }
        else{
            printf("You guessed it in %d atetempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}