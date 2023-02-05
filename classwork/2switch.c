#include <stdio.h>
int main()
{
    int day_number;
    printf("The day_number is\n");
    scanf("%d", &day_number);

    switch (day_number)
    {
    case 1:
        printf("The day is Monday\n");
        break;
    case 2:
        printf("The day is Tuesday\n");
        break;
    case 3:
        printf("The day is Wednesday\n");
        break;
    case 4:
        printf("The day is Thursday\n");
        break;
    case 5:
        printf("The day is Friday\n");
        break;
    case 6:
        printf("The day is Saturday\n");
        break;
    case 7:
        printf("The day is Sunday\n");
        break;
    default:
        printf("Invalid Operation");
    }
    return 0;
}