//Write a programme to check that given alphabeyt is a consonent or vowel.
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
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':

        printf("Its a vowel");
        break;
    default:
        printf("Its a consonent");
    }
}