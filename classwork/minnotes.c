#include <stdio.h>
#include <math.h>

int main()
{
    int withdrawn_amount;
    printf("The amount to be withdrawn is\n");
    scanf("%d", &withdrawn_amount);
    int notes = 0;
    while (withdrawn_amount != 0)
    {
        if (withdrawn_amount >= 100)
        {
            notes += withdrawn_amount/100;
            withdrawn_amount = withdrawn_amount % 100;
        }
        if (50 >= withdrawn_amount < 100)
        {
            notes += withdrawn_amount/50;
            withdrawn_amount = withdrawn_amount % 50;
        }
        if (10 >= withdrawn_amount < 50)
        {
            notes += withdrawn_amount/10;
            withdrawn_amount = withdrawn_amount % 10;
        }
        if (5 >= withdrawn_amount < 10)
        {
            notes += withdrawn_amount/5;
            withdrawn_amount = withdrawn_amount % 5;
        }
        if (2 >= withdrawn_amount < 5)
        {
            notes += withdrawn_amount/2;
            withdrawn_amount = withdrawn_amount % 2;
        }
        if (1 >= withdrawn_amount < 2)
        {
            notes += withdrawn_amount/1;
            withdrawn_amount = withdrawn_amount % 1;
        }
    }
        printf("Number of notes: %d\n", notes);
        return 0;
    }