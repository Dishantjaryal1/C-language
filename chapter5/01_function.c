#include <stdio.h>
int sum(int a, int b);//function prototype.


int main(){ //function call.
    int c;
    c=sum(200,9);
    printf("The value of c is %d\n",c);
    return 0;
}

int sum(int a, int b) //function definition.
{ int result;
    result= a*b;
    return result;
}
