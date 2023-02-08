#include <stdio.h>
float force(float mass, float acceleration);
int main(){
    float mass,acceleration;
    printf("The mass and acceleration of a body is\n");
    scanf("%f %f",&mass,&acceleration);

    printf("The force on a body is %.2f",force(mass,acceleration));
    
    return 0;
}
float force(float mass, float acceleration){
    float result;
    result= (mass * acceleration);
    return result;
}