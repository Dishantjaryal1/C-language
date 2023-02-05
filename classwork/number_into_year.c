#include <stdio.h>
int main()
{
    int num, year, week, day;
    printf("The number is\n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num >= 366)
        {
            year = num / 366;
            num = num % 366;
        }
        if (num >= 7)
        {
            week = num / 7;
            num = num % 7;
        }
        if (num >= 1)
        {
            day = num / 1;
            num = num % 1;
        }
        printf("%d years , %d weeks and %d  days", year, week, day);
    }
}