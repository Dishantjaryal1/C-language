#include <stdio.h>
int main()
{
    char alphabet;
    printf("The alphabet is\n");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'A':
    case 'a':
        printf("Apple");
        break;

    case 'B':
    case 'b':
        printf("Banana");
        break;

    case 'C':
    case 'c':
        printf("Cat");
        break;

    case 'D':
    case 'd':
        printf("Dog");
        break;

    case 'E':
    case 'e':

        printf("Elephant");
        break;

    case 'F':
    case 'f':
        printf("Football");
        break;
    default:
        printf("INVALID OPERATION");
    }
}